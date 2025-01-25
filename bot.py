from telegram import Update
from telegram.ext import Application, CommandHandler, MessageHandler, filters, ContextTypes

# Replace 'YOUR_BOT_TOKEN' with your actual bot token from BotFather
BOT_TOKEN = "8192112781:AAEVz-q8OmdBvtZnmND_Y2QxR8osU-dF530"

async def start(update: Update, context: ContextTypes.DEFAULT_TYPE):
    """Handle the /start command."""
    await update.message.reply_text("Hello! I'm your simple Telegram bot. How can I assist you?")

async def echo(update: Update, context: ContextTypes.DEFAULT_TYPE):
    """Echo back user messages."""
    await update.message.reply_text(update.message.text)

def main():
    """Start the bot."""
    app = Application.builder().token(BOT_TOKEN).build()

    # Add command and message handlers
    app.add_handler(CommandHandler("start", start))
    app.add_handler(MessageHandler(filters.TEXT & ~filters.COMMAND, echo))

    # Start the bot
    print("Bot is running...")
    app.run_polling()

if __name__ == "__main__":
    main()
