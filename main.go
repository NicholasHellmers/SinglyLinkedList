package SinlgyLinkedList

type SinglyLinkedList struct {
	Head *ListNode
}

type ListNode struct {
	Val  interface{}
	Next *ListNode
}

func (sll SinglyLinkedList) Search(Val interface{}) ListNode {

	var curr ListNode = *sll.Head
	var res ListNode = ListNode{}

	for curr.Val != nil {
		if curr.Val == Val {
			res = curr
			return res
		}
		curr = *curr.Next
	}

	return res
}

func (sll *SinglyLinkedList) Insert(Val interface{}) {
	var newNode ListNode = ListNode{Val: Val, Next: sll.Head}
	sll.Head = &newNode
}

func (sll *SinglyLinkedList) Delete(curr *ListNode, prev *ListNode, Val interface{}) {
	if curr.Val == Val {
		if prev != nil {
			prev.Next = curr.Next
		} else {
			sll.Head = curr.Next
		}
	} else {
		sll.Delete(curr.Next, curr, Val)
	}
}

func (sll SinglyLinkedList) Values() []interface{} {
	var curr ListNode = *sll.Head
	var res []interface{} = []interface{}{}

	for curr.Next != nil {
		res = append(res, curr.Val)
		curr = *curr.Next
	}

	res = append(res, curr.Val)
	return res
}
