/**************************************************************

    Author: Muhamad Fadhli Akbar, 2023

    Apa itu Bucket Sort?

    Bucket sort adalah sebuah algoritma pengurutan (sorting)
    yang bekerja dengan membagi elemen" input ke dalam
    "bucket" atau keranjang, kemudian mengurutkan masing-masing bucket
    secara terpisah, baik dengan menggunakan algoritma pengurutan lain
    atau menerapkan rekursi pada bucket sort itu sendiri.

**************************************************************/


#include <vector>
#include <algorithm>
#include <iostream>

namespace dsa {

class BucketSort {
public:
  static void sort(std::vector<int>& values) {
    if (values.empty())
      return;

    int minValue = *std::min_element(values.begin(), values.end());
    int maxValue = *std::max_element(values.begin(), values.end());

    bucketSort(values, minValue, maxValue);
  }

private:
  static void bucketSort(std::vector<int>& values, int minValue, int maxValue) {
    int numBuckets = values.size();
    std::vector<std::vector<int>> buckets(numBuckets);

    double range = static_cast<double>(maxValue - minValue + 1);
    for (int value : values) {
      int index = static_cast<int>((value - minValue) / range * (numBuckets - 1));
      buckets[index].push_back(value);
    }

    for (auto& bucket : buckets)
      std::sort(bucket.begin(), bucket.end());

    int index = 0;
    for (auto& bucket : buckets) {
      for (int value : bucket)
        values[index++] = value;
    }
  }
};

void BucketSort_test() {
  std::vector<int> array{10, 4, 6, 8, 13, 2, 3};
  BucketSort::sort(array);
  // Cetak: [2, 3, 4, 6, 8, 10, 13]
  std::cout << "[";
  for (size_t i = 0; i < array.size(); ++i) {
    std::cout << array[i];
    if (i != array.size() - 1)
      std::cout << ", ";
  }
  std::cout << "]" << std::endl;

  array = std::vector<int>{10, 10, 10, 10, 10};
  BucketSort::sort(array);
  // Cetak: [10, 10, 10, 10, 10]
  std::cout << "[";
  for (size_t i = 0; i < array.size(); ++i) {
    std::cout << array[i];
    if (i != array.size() - 1)
      std::cout << ", ";
  }
  std::cout << "]" << std::endl;
}

}
