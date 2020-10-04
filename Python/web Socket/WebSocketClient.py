import asyncio
import websockets

# method to send and reveive from the server
async def message():
    async with websockets.connect("ws://localhost:1234") as socket:
        while True:
            msg = input("please say something")
            await socket.send(msg)
            reply = await socket.recv()
            print(reply)
            if 'ok closing' in reply:
                break

asyncio.get_event_loop().run_until_complete(message())
#asyncio.get_event_loop().run_forever()


    
