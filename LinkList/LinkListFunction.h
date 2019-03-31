#include <stdio.h>
struct link{
	int data;
	int index;
	struct link *next;
};


//函数功能：新建个节点，并且添加到链表末尾，反回添加节点后的链表的头指针
struct link *AppendNode(struct link *head,int data);

//函数功能：显示链表中所有节点的节点号和该节点的数据项内容
void DisplayNode(struct link *head);

//函数功能：释放head指向的链表中所有节点占用的内存
void DeleteMemory(struct link *head);

//函数功能：从head指向的链表中删除一个节点，返回删除节点后的链表的头指针
struct link *DeleteNode(struct link *head,int nodeData);

//函数功能：在以按升序排列的链表中插入一个节点，返回插入节点后的链表头指针
struct link *InsertNode(struct link *head,int nodeData);

//函数功能：为链表排序
struct link *SortingForLinkList(struct link *head);

//函数功能：为链表添加序号index
void AddSerialForLinkList(struct link *head);
