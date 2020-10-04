import asyncio
import websockets

#crearing the method to receive the message and returns the reverse of the message
async def response(websocket, path):
        while True:
                message = await websocket.recv()
                print(f"We got the message from the client: {message}")
                if message == 'ok bye':
                        await websocket.send("ok closing")
                        break
                await websocket.send(message[::-1])
                
# server starts in localhost at port 1234
start_server = websockets.serve(response, 'localhost', 1234)

#asyncio methods to start server and run forever
asyncio.get_event_loop().run_until_complete(start_server)
asyncio.get_event_loop().run_forever()
