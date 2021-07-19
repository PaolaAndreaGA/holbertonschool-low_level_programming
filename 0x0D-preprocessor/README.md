Header Files
The #include directive tells the preprocessor to grab the text of a file and place it directly into the current file. Typically, such statements are placed at the top of a program--hence the name "header file" for files thus included.
Constants
If we write
1
#define [identifier name] [value]
whenever [identifier name] shows up in the file, it will be replaced by [value].

If you are defining a constant in terms of a mathematical expression, it is wise to surround the entire value in parentheses:
1
#define PI_PLUS_ONE (3.14 + 1)
By doing so, you avoid the possibility that an order of operations issue will destroy the meaning of your constant:
1
x = PI_PLUS_ONE * 5;
Without parentheses, the above would be converted to
1
x = 3.14 + 1 * 5;
which would result in 1 * 5 being evaluated before the addition, not after. Oops!
