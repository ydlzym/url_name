*,C 预处理器
C 预处理器不是编译器的组成部分，但是它是编译过程中一个单独的步骤。简言之，C 预处理器只不过是一个文本替换工具而已，
它们会指示编译器在实际编译之前完成所需的预处理。

**，预处理器运算符
A.宏延续运算符（\）
B.字符串常量化运算符（#）
C.标记粘贴运算符（##）
D.defined() 运算符
#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

**参数化的宏
A.#define MAX(x,y) ((x) > (y) ? (x) : (y))


