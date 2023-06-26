#include <iostream>
#include <string>

using namespace std;

int main() {
  // Initialize the ChatGPT API client.
  string api_key = "YOUR_API_KEY";
  ChatGPTClient client(api_key);

  // Create a Discord or Telegram bot object.
  string bot_token = "YOUR_BOT_TOKEN";
  DiscordBot bot(bot_token);

  // Start listening for messages.
  while (true) {
    string message = bot.receive_message();

    // Generate a response from ChatGPT.
    string response = client.generate_response(message);

    // Send the response to the user.
    bot.send_message(response);
  }

  return 0;
}
