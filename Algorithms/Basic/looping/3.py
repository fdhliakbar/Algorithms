def selection_sort(arr):
    """
    Fungsi ini akan melakukan selection sort pada array yang diberikan.

    Parameter:
        arr (list): Array yang akan diurutkan.

    Returns:
        list: Array yang sudah diurutkan (ascendin order).
    """
    if not isinstance(arr, list):
        raise TypeError("Parameter 'arr' harus berupa list.")

    n = len(arr)
    if n <= 1:
        return arr

    for i in range(n):
        # Cari indeks elemen terkecil di sisa array
        min_index = i

        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        # Tukar elemen terkecil dengan elemen di indeks i
        arr[i], arr[min_index] = arr[min_index], arr[i]

    return arr


# Contoh penggunaan Selection Sort
unsorted_list = [64, 34, 25, 12, 22, 11, 90]
sorted_list = selection_sort(unsorted_list)
print("Sorted array:", sorted_list)
