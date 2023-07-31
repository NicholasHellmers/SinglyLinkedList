package LinkedList

type SinglyLinkedList struct {
	Head *ListNode
}

type ListNode struct {
	Val  interface{}
	Next *ListNode
}

// This method takes a value to search in the list and returns the
// first node that contains the value. If the value is not found,
// the method returns an empty ListNode
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

// This method takes a value to insert in the list and inserts it
// at the beginning of the list
func (sll *SinglyLinkedList) Insert(Val interface{}) {
	var newNode ListNode = ListNode{Val: Val, Next: sll.Head}
	sll.Head = &newNode
}

func (sll *SinglyLinkedList) Delete(Val interface{}) {
	var curr ListNode = *sll.Head
	var prev ListNode = ListNode{}

	for curr.Val != nil {
		if curr.Val == Val {
			if prev.Val == nil {
				sll.Head = curr.Next
			} else {
				prev.Next = curr.Next
			}
		}
		prev = curr
		curr = *curr.Next
	}
}
