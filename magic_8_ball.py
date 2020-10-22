import sys
import random
answers = ['It is certain.','As I see it, yes.','It is decidedly so.','Most likely.',
           'Without a doubt.','Without a doubt.','Yes.','Yes – definitely.','You may rely on it.',
           'Signs point to yes.','Reply hazy, try again.','Ask again later.','Better not tell you now.',
           'Cannot predict now.','Concentrate and ask again.','Don\'t count on it.','My reply is no.',
           'My sources say no.','Outlook not so good.','Very doubtful']
question = input("Ask the Magic-8 Ball your Question(Press Enter to quit): ")
if(question==""):
    print("Hope your problem is solved, if not I can help :)")
    sys.exit()
else:
    print("-->",random.choice(answers))
