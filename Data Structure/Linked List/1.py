def createNode(data):
    return {'data': data, 'next': None}


def insertAtHead(linkedList, data):
    newNode = createNode(data)
    newNode['next'] = linkedList
    return newNode


def insertAtTail(linkedList, data):
    newNode = createNode(data)

    if linkedList is None:
        return newNode

    current = linkedList

    while current['next'] is not None:
        current = current['next']

    current['next'] = newNode

    return linkedList


def insertAfterNode(linkedList, targetData, newData):
    newNode = createNode(data)
    current = linkedList

    while current:
        if current['data'] == targetData:
            newNode['next'] = current['next']
            current['next'] = newNode
            return linkedList
        current = current['next']


def printLinkedList(linkedList):
    while linkedList:
        print(linkedList['data'], end='->')
        linkedList = linkedList['next']
    print('none')


def searchLinkedList(linkedList, target):
    while linkedList is not None:
        if linkedList['data'] == target:
            return linkedList


def deleteNode(linkedList, targetData):
    current = linkedList

    while current['next']:
        if (current['next']['data' == targetData]):
            current['next'] = current['next']['next']
            return linkedList
        current = current['next']


data = ['Universitas', 'Ahmad', 'Dahlan']
newData = 'Muhammadiyah'
linkedList = None

for item in data:
    linkedList = insertAtHead(linkedList, item)

printLinkedList(linkedList)
