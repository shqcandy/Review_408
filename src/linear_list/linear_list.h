/*
 * linear_list.h
 *
 *  Created on: 2016年3月14日
 *      Author: Dell
 */

#ifndef LINEAR_LIST_H_
#define LINEAR_LIST_H_
typedef int TYPE;

class List
{
public:
	void init() = 0;
	void destory() = 0;
	void clear() = 0;
	bool isEmpty() = 0;
	int getSize() = 0;
	TYPE get(int i) = 0;

	void traverse(void visit(TYPE type)) = 0;
	TYPE elete(int i) = 0;
	TYPE insert(int i) = 0;
	TYPE next(int i) = 0;
	TYPE prior(int i) = 0;
	int local(TYPE type , int compare(TYPE a , TYPE b)) = 0;

	void unionList(List & a , const List & b) = 0;
};

class List1 : public List
{
public:
	// 为表示简单，使用0来表示其头结点
	TYPE list;
	// 使用空指针表示尾节点
	List1 * next;
};

class List2 : public List
{
public:
	// 使用数组来表示线性表
	TYPE * list;
	// 数组大小（其中含有的元素个数）
	int size;
	// 数组长度（数组总长度）
	int length;
private:
	static int initSize = 0;
	static int initLength = 20;
	static int initStep = 10;
};

class List3 : public List
{
public:
	// 为表示简单，使用0来表示其头结点
	TYPE list;
	// 使用空指针表示尾节点
	List3 * next;
	List3 * prior;
};

#endif /* LINEAR_LIST_H_ */
