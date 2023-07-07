def bubble_sort(numbers):
    lengthNumbers = len(numbers)

    # Traverse through all array elements
    for i in range(lengthNumbers):
        swapped = False

        for j in range(0, lengthNumbers - i - 1):
            # Swap if the element
            # found is greater than the
            # next elements
            if numbers[j] > numbers[j + 1]:
                numbers[j], numbers[j + 1] = numbers[j + 1], numbers[j]
                swapped = True

        if not swapped:
            break


# Driver code to test above
if __name__ == '__main__':
    numbers = [8, 2, 1, 4, 5]

    print('Sebelum:', numbers)

    bubble_sort(numbers)
    print('Setelah:', numbers)