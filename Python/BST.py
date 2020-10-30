class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


def insert(root, node):
    if root is None:
        root = node
        return root

    if node.value < root.value:
        root.left = insert(root.left, node)

    if node.value > root.value:
        root.right = insert(root.right, node)

    return root


def preorder(root):
    if root:
        print(root.value)
        preorder(root.left)
        preorder(root.right)


def inorder(root):
    if root:
        inorder(root.left)
        print(root.value)
        inorder(root.right)


def postorder(root):
    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.value)


def get_min_value_node(root):
    if root:
        while root.left is not None:
            root = root.left
        return root


def delete_node(root, value):
    if root is None:
        return root

    if value < root.value:
        root.left = delete_node(root.left, value)

    elif value > root.value:
        root.right = delete_node(root.right, value)

    else:
        if root.left is None:
            temp = root.right
            root = None
            return temp

        elif root.right is None:
            temp = root.left
            root = None
            return temp

        else:
            temp = get_min_value_node(root.right)
            root.value = temp.value
            root.right = delete_node(root.right, temp.value)

    return root


root = Node(50)
insert(root, Node(10))
insert(root, Node(33))
insert(root, Node(81))
insert(root, Node(15))
insert(root, Node(60))
insert(root, Node(27))

delete_node(root, 50)

preorder(root)
inorder(root)
postorder(root)
