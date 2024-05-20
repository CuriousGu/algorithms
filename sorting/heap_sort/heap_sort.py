def heapify(arr: list, n: int, i: list):
    largest = i
    l_child = 2 * i + 1
    r_child = 2 * i + 2

    if l_child < n and arr[l_child] > arr[i]:
        largest = l_child

    if r_child < n and arr[r_child] > arr[largest]:
        largest = r_child

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        arr = heapify(arr, n, largest)

    return arr


def sort(arr: list):
    n = len(arr)
    for i in range(n // 2 - 1, -1, -1):
        arr = heapify(arr, n, i)

    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        arr = heapify(arr, i, 0)

    return arr
