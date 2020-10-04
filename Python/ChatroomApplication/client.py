from tkinter import *
import socket
import threading
import sys


class ChatApplication():
    def __init__(self):
        self.chatroom_size = '750x450+250+100'
        self.chatroom_title = 'Chatroom'
        self.backgroungcolor = 'pink'
        self.chatbox_size = (90, 25)
        self.messagebox_width = 70
        self.send_button_background_color = 'cyan'
        self.send_button_foreground_color = 'black'
    

    def get_user_name(self):
        self.user_name = input("Enter User name : ")


    def get_connection_data(self):
        ip = input("Enter ip to connect [Enter blank for default]")
        port = int(input("Enter the port to connect [Enter blank for deafult]"))
        if(len(ip)==0):
            ip = "0.0.0.0"
        if(len(port)==0):
            port = 8000
        self.connection_data = (ip, port)

   
    def connect_to_server(self):
        self.s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            self.s.connect(self.connection_data)
        except:
            print("Server Not found!")
            sys.exit()
    

    def contact_server(self):
        self.s.send(str.encode(self.user_name))
        self.welcome_msg = self.s.recv(2048).decode()
        if "ERROR" in self.welcome_msg:
            print(self.welcome_msg)
            sys.exit()
        self.is_connected = True

        
    
    def recieve_message_from_server(self):
        while self.is_connected:
            message = self.s.recv(2048).decode()
            if self.user_name in message.split(':')[0]:
                message = "Me :" + message.split(':')[1]        
            self.chatbox.insert(END, str(message))



    def send_messages_to_server(self):
        message = self.messagebox.get()
        self.s.send(str.encode(message))
        self.messagebox.delete(0, END)


    def chat_screen(self):
        self.root = Tk()
        self.root.geometry(self.chatroom_size)
        self.root.title(self.chatroom_title)
        self.root.config(bg = self.backgroungcolor)

        self.chatbox = Listbox(self.root, height = self.chatbox_size[1], width = self.chatbox_size[0])
        self.chatbox.grid(row = 0, column = 0, padx = (35,20), pady = 30, columnspan = 3)

        self.messagebox = Entry(self.root, width = self.messagebox_width)
        self.messagebox.grid(row = 1, column = 0, columnspan = 2, padx = (35, 0))

        self.send_button = Button(self.root, text = 'Send',
                                         bg = self.send_button_background_color,
                                         fg = self.send_button_foreground_color,
                                         command = self.send_messages_to_server)
        self.send_button.grid(row = 1, column = 2)

        self.chatbox.insert(END, str(self.welcome_msg))

        listen_for_messages_thread = threading.Thread(target = self.recieve_message_from_server)
        listen_for_messages_thread.start()

        self.root.mainloop()
    


if __name__ == "__main__":
    chat_app = ChatApplication()
    chat_app.get_connection_data()
    chat_app.get_user_name()
    chat_app.connect_to_server()
    chat_app.contact_server()
    chat_app.chat_screen()