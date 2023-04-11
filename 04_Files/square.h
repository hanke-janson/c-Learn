#ifndef SQUARE_H
#define SQUARE_H
int getSquareSides();
int getSquarePerimeter(int sideLength);
#endif

// 通过称为标头保护（也称为包含保护）的机制来避免函数定义重复问题。

// #included此标头时，预处理器会检查以前是否定义了SOME_UNIQUE_NAME_HERE
// 如果这是我们第一次包含标头，则不会定义SOME_UNIQUE_NAME_HERE
// 因此，它#defines SOME_UNIQUE_NAME_HERE并包含文件的内容
// 如果标头再次包含在同一个文件中，则从第一次包含标头的内容开始就已经定义了SOME_UNIQUE_NAME_HERE，并且标头的内容将被忽略（感谢#ifndef）

// 所有头文件都应该有头保护
// SOME_UNIQUE_NAME_HERE可以是您想要的任何名称
// 但按照惯例，设置为头文件的完整文件名，键入全部大写，对空格或标点符号使用下划线

// 由于存在保护名称冲突的可能性，许多开发人员建议在标头保护中使用更复杂/唯一的名称
// 一些好的建议是命名约定 <PROJECT>_<PATH>_<FILE>_H、<FILE>_<LARGE RANDOM NUMBER>_H或<FILE>_<CREATION DATE>_H

/*
	#ifndef SOME_UNIQUE_NAME_HERE
	#define SOME_UNIQUE_NAME_HERE

	// 在这里写函数声明 

	#endif
*/

// 现代编译器使用 #pragma 指令支持更简单的替代形式的标头保护
// #pragma once
