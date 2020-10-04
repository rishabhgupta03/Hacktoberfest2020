class SNode:
    def ___init__(self):
        self.head=head
class Node:
    def __init__(self,data=None):
        self.data=data
        self.next_=None
    def Show(self):
        Vprint=self.head
        while Vprint is not None:
            print(Vprint.data)
            Vprint=Vprint.next_
    def InsertB(self,val):
        Vprint=self.head
        begin=Node(val)
        begin.next_=Vprint
        self.head=begin
    def Enqueue(self,val):
        Vprint=self.head
        begin=Node(val)
        begin.next_=Vprint
        self.head=begin
    def Push(self,val):
        Vprint=self.head
        begin=Node(val)
        begin.next_=Vprint
        self.head=begin
    def Pop(self):
        self.head=self.head.next_
    def Dequeue(self):
        if(self.head==None):
            print("No element ot dequeue")
        else:
            Vprint=self.head
            while(Vprint.next_.next_!=None):
                Vprint=Vprint.next_
            Vprint.next_=None
    def InsertE(self,val):
        Vprint=self.head
        if self.head is None:
            self.head=Node(val)
            return
        while Vprint.next_ is not None:
            Vprint=Vprint.next_
        end=Node(val)
        Vprint.next_=end
    def InsertM(self,val,point):
        if(point is None):
            print("No node fould!")
            return
        Middle=Node(val)
        Middle.next_=point.next_
        point.next_=Middle
    def Delete(self,val):
        Vprint=self.head
        if Vprint is None:
            print("No element in the list")
            return
        if Vprint.data==val:
            if(Vprint.next_!=None):
                self.head=Vprint.next_
                return
            else:
                self.head=None
                return
            
        while Vprint is not None:
            Pprint=Vprint
            Vprint=Vprint.next_
            if (Vprint.data==val):
                Pprint.next_=Vprint.next_
                break
                

                
                
            

start=SNode()
start.head=Node("Mon")
s1=Node("Tue")
s2=Node("Wed")
start.head.next_=s1
s1.next_=s2
Node.InsertB(start,"Sun")
Node.InsertE(start,"Thur")
Node.InsertM(start,"Sat",s1)
Node.Delete(start,"Sat")
Node.Show(start)
print("over")
Node.Enqueue(start,"Sat")
Node.Dequeue(start)
Node.Dequeue(start)
Node.Push(start,'fri')
Node.Pop(start)
Node.Show(start)

