class MyQueue:
    
    def __init__(self):
        self.st1, self.st2 = [], []

    def push(self, x: int) -> None:
        self.st1.append(x)

    def pop(self) -> int:
        front = self.st1[0]
        self.st1.remove(front)
        return front

    def peek(self) -> int:
        front = self.st1[0]
        return front

    def empty(self) -> bool:
        if self.st1:
            return False
        return True


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()