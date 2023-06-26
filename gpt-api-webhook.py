from openai import ChatGPTClient

def main():
    # Initialize the ChatGPT API client.
    api_key = "YOUR_API_KEY"
    client = ChatGPTClient(api_key)

    # Create a Discord or Telegram bot object.
    bot_token = "YOUR_BOT_TOKEN"
    bot = DiscordBot(bot_token)

    # Start listening for messages.
    while True:
        message = bot.receive_message()

        # Generate a response from ChatGPT.
        response = client.generate_response(message)

        # Send the response to the user.
        bot.send_message(response)

if __name__ == "__main__":
    main()
    