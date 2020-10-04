from tkinter import Tk, Button
from tkinter.font import Font
import tkinter.messagebox
from copy import deepcopy

class GUI:

    def __init__(self):
        
        self.app = Tk()
        self.app.title('TicTacToe')
        self.board = Board()
        self.font = ('Times 32 bold')
        self.buttons = {}
        for i,j in self.board.fields:
            handler = lambda i=i, j=j: self.move(i,j)
            button = Button(self.app, command=handler, font=self.font, bg='Cadet blue', fg='white', height=3, width=7)
            button.grid(row = j, column = i)
            self.buttons[i,j] = button

        handler = lambda: self.reset()
        button = Button(self.app, text = "Reset", command=handler,font='Times 32 bold', bg='gray', fg='white', height=4, width=8)
        button.grid(row=self.board.size+1, column = 0, columnspan=self.board.size, sticky='WE')
        self.update()

    def reset(self):
        print ("Resetting...")
        for i,j in self.board.fields:
            self.buttons[i,j].configure(background='Cadet blue')
        self.board = Board()
        self.update()

    def update(self):
        for (i,j) in self.board.fields:
            text = self.board.fields[i,j]
            self.buttons[i,j]['text'] = text
            self.buttons[i,j]['disabledforeground'] = 'black'
            if text==self.board.empty:
                self.buttons[i,j]['state'] = 'normal'
            else:
                self.buttons[i,j]['state'] = 'disabled'
                self.buttons[i,j].configure(background='powder blue')

            winning = self.board.won()
            if winning: # Opponent is winning
                for i,j in winning:
                    self.buttons[i,j]['disabledforeground'] = 'red'
                    
                for i,j in self.buttons:
                    self.buttons[i,j]['state'] = ['disabled']
            for (i,j) in self.board.fields:
                self.buttons[i,j].update()

    def move(self,i,j):
        self.app.config(cursor='watch')
        self.app.update()
        self.board = self.board.move(i,j)
        self.update()
        move = self.board.best()
        if move:
            self.board = self.board.move(*move)
            self.update()
        self.app.config(cursor='')
    
    def mainloop(self):
        self.app.mainloop()

class Board:

    def __init__(self, other=None):
        self.player = 'X'
        self.opponent = 'O'
        self.empty = " "
        self.size = 3
        self.fields = {}
        for j in range(self.size):
            for i in range(self.size):
                self.fields[i,j] = self.empty
        if other:
            self.__dict__ = deepcopy(other.__dict__)

    def move(self, i, j):
        board = Board(self)
        board.fields[i,j] = board.player
        (board.player,board.opponent) = (board.opponent,board.player)
        return board

    def won(self):
        # horizontal
        for y in range(self.size):
          winning = []
          for x in range(self.size):
            if self.fields[x,y] == self.opponent:
              winning.append((x,y))
          if len(winning) == self.size:
            return winning
        # vertical
        for x in range(self.size):
          winning = []
          for y in range(self.size):
            if self.fields[x,y] == self.opponent:
              winning.append((x,y))
          if len(winning) == self.size:
            return winning
        # diagonal
        winning = []
        for y in range(self.size):
          x = y
          if self.fields[x,y] == self.opponent:
            winning.append((x,y))
        if len(winning) == self.size:
          return winning
        # other diagonal
        winning = []
        for y in range(self.size):
          x = self.size-1-y
          if self.fields[x,y] == self.opponent:
            winning.append((x,y))
        if len(winning) == self.size:
          return winning
        # default
        return None
        
    
    def minimax(self, player):
        if self.won():
            if player:
                return (-1, None)
            else:
                return (+1, None)
        elif self.tied():
            return (0, None)

        elif player:
            best = (-10, None)
            for i,j in self.fields:
                if self.fields[i,j] == self.empty:
                    value = self.move(i,j).minimax(not player)[0]
                    if value > best[0]:
                        best = (value, (i,j))
            return best
        else:
            best = (+10,None)
            for i,j in self.fields:
                if self.fields[i,j] == self.empty:
                    value = self.move(i,j).minimax(not player)[0]
                    if value < best[0]:
                        best = (value,(i,j))
            return best

    def best(self):
        return self.minimax(True)[1]

    def tied(self):
        for (i,j) in self.fields:
            if self.fields[i,j] == self.empty:
                return False
        return True

    def __str__(self):
        string = ''
        for j in range(self.size):
            for i in range(self.size):
                string += self.fields[i,j]
            string += '\n'
        return string

if __name__ == '__main__':
    GUI().mainloop()
    
