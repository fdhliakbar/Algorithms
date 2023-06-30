# Apa Itu Linked List

Linked list adalah strukur data linier berbentuk rantai simpul di mana setiap simpul menyimpan 2 item, yaitu **nilai data** dan **pointer ke simpul elemen berikutnya**. Berbeda dengan array, elemen linked list tidak ditempatkan dalam alamat memori yang berdekatan melainkan elemen ditautkan menggunakan pointer<br>

Simpul pertama dari linked list disebut sebagai head atau simpul kepala. Apabila linked list berisi elemen kosong, maka nilai pointer dari head menunjuk ke NULL. Begitu juga untuk pointer berikutnya dari simpul terakhir atau simpul ekor akan menunjuk ke NULL.<br>

Ukuran elemen dari linked list dapat bertambah secara dinamis dan mudah untuk menyisipkan dan menghapus elemen karena tidak seperti array, kita hanya perlu mengubah pointer elemen sebelumnya dan elemen berikutnya untuk menyisipkan atau menghapus elemen.<br>

Linked list biasanya digunakan untuk membuat file system, adjacency list, dan hash table.<br>

## Jenis Linked List

Jenis-jenis Linked List yaitu:<br>

- Singly linked list
- Doubly linked list
- Circular linked list
- Circular doubly linked list

## Karakteristik Linked List

Sebuah linked list memiliki beberapa karakteristik sebagai berikut:

- Linked list menggunakan memori tambahan untuk menyimpan link (tautan)
- Untuk inisialiasi awal linked list, kita tidak perlu tahu ukuran dari elemen.
- Linked list umumnya dapat digunakan untuk mengimplementasikan struktur data lain seperti stack, queue, ataupun graf
- Simpul pertama dari linked list disebut sebagai Head.
- Pointer setelah simpul terakhir selalu bernilai NULL
- Dalam struktur data linked list, operasi penyisipan dan penghapusan dapat dilakukan dengan mudah
- Tiap-tiap simpul dari linked list berisi pointer atau tautan yang menjadi alamat dari simpul berikutnya
- Linked list bisa menyusut atau bertambah kapan saja dengan mudah.
