#include <iostream>
#include <string>
#include <string_view>

/*
* Mentions to https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797 and other ANSI docs
* Lets leave a star to this MD !
*/

// Reset
const std::string reset      {"\033[0m"};

// Styles
const std::string bold       {"\033[1m"};
const std::string faint      {"\033[2m"};
const std::string italic     {"\033[3m"};
const std::string underline  {"\033[4m"};
const std::string blink      {"\033[5m"};
const std::string reverse    {"\033[7m"};
const std::string conceal    {"\033[8m"};
const std::string strike     {"\033[9m"};

// Reset individual styles
const std::string normalIntensity {"\033[22m"};
const std::string noItalic         {"\033[23m"};
const std::string noUnderline      {"\033[24m"};
const std::string noBlink          {"\033[25m"};
const std::string noReverse        {"\033[27m"};
const std::string reveal           {"\033[28m"};

// Standard colors
const std::string black   {"\033[30m"};
const std::string red     {"\033[31m"};
const std::string green   {"\033[32m"};
const std::string yellow  {"\033[33m"};
const std::string blue    {"\033[34m"};
const std::string magenta {"\033[35m"};
const std::string cyan    {"\033[36m"};
const std::string white   {"\033[37m"};

// Bright colors
const std::string brightBlack   {"\033[90m"};
const std::string brightRed     {"\033[91m"};
const std::string brightGreen   {"\033[92m"};
const std::string brightYellow  {"\033[93m"};
const std::string brightBlue    {"\033[94m"};
const std::string brightMagenta {"\033[95m"};
const std::string brightCyan    {"\033[96m"};
const std::string brightWhite   {"\033[97m"};

// Reset foreground
const std::string defaultForeground {"\033[39m"};

// Standard colors
const std::string bgBlack   {"\033[40m"};
const std::string bgRed     {"\033[41m"};
const std::string bgGreen   {"\033[42m"};
const std::string bgYellow  {"\033[43m"};
const std::string bgBlue    {"\033[44m"};
const std::string bgMagenta {"\033[45m"};
const std::string bgCyan    {"\033[46m"};
const std::string bgWhite   {"\033[47m"};

// Bright colors
const std::string bgBrightBlack   {"\033[100m"};
const std::string bgBrightRed     {"\033[101m"};
const std::string bgBrightGreen   {"\033[102m"};
const std::string bgBrightYellow  {"\033[103m"};
const std::string bgBrightBlue    {"\033[104m"};
const std::string bgBrightMagenta {"\033[105m"};
const std::string bgBrightCyan    {"\033[106m"};
const std::string bgBrightWhite   {"\033[107m"};

// Reset background
const std::string defaultBackground {"\033[49m"};


std::string color(std::string text, std::string style) {
    return style + text + reset;
}