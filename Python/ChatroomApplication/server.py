import socket
import threading

class ServerForChatroom:
    def __init__(self, addr):
        self.connection_addr = addr
        self.s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.connection_msg = "Welcome to Chatroom"
        self.msg_size = 2048
        self.users = []
        self.connection_status = True

    
    def listen_for_messages(self, client_data):
        is_connected = True
        while is_connected:
            if len(self.users) > 0:
                try:
                    msg = client_data[1].recv(self.msg_size).decode()
                except:
                    is_connected = False
                    self.users.remove(client_data)
                
                msg = f"{client_data[0]} : {msg}"

                for user in self.users:
                    try:
                        user[1].send(str.encode(msg))
                    except:
                        continue

    
    def connection(self):
        self.s.bind((self.connection_addr[0], self.connection_addr[1]))
        self.s.listen(5)
        print("Listening to connections....")
        while self.connection_status:
            conn, addr = self.s.accept()
            new_user = conn.recv(self.msg_size).decode()
            user_taken = False
            for user in self.users:
                if user[0] == new_user:
                    conn.send(str.encode("ERROR : USER NAME TAKEN!"))
                    user_taken = True
            
            if user_taken:
                continue

            for user in self.users:
                user[1].send(str.encode(f"{new_user} has entered the chat"))

            self.users.append((new_user, conn))

            new_user_thread = threading.Thread(target = self.listen_for_messages, args=((new_user, conn), ))
            new_user_thread.start()

            print(f"Connection established with {new_user} at {addr}")
            conn.send(str.encode(self.connection_msg))


if __name__ == "__main__":
    ip = input("Enter ip to connect [Enter blank for default]")
    port = int(input("Enter the port to connect [Enter blank for deafult]"))
    if(len(ip)==0):
        ip = "0.0.0.0"
    if(len(port)==0):
        port = 8000
    connection_data = (ip, port)
    server_connection = ServerForChatroom(connection_data)
    server_connection.connection()