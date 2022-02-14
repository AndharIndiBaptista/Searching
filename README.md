# Searching
Tugas ASD mengenai Searching.

Pencarian data atau Table look-up atau Storage and retrieval information merupakan suatu
proses yang bertujuan untuk mengumpulkan informasi di dalam komputer dan kemudian mencari kembali
informasi yang diperlukan secepat mungkin.

SEQUENTIAL SEARCHING
- merupakan metode pencarian paling sederhana
- Prinsip :
  data yang ada dibandingkan satu per satu secara
  berurutan dengan yang dicari sampai data tersebut
  ditemukan atau tidak ditemukan.
- Pada kasus yang paling buruk, untuk N elemen data
  harus dilakukan pencarian sebanyak N kali pula.
  
 Kekurangan: proses yang cenderung lama apabila data berjumlah banyak.
 
BINARY SEARCHING
- Syarat data harus urut atau proses pencarian tidak dapat dilakukan.
- Mula-mula diambil posisi awal 0 dan posisi akhir =N - 1, kemudian dicari posisi data tengah dengan rumus (posisi awal + posisi akhir)/2. Kemudian data yang dicari dibandingkan dengan data tengah. Jika lebih kecil, proses dilakukan kembali tetapi posisi akhir dianggap sama dengan posisi tengah -1. Jika lebih besar, proses dilakukan kembali tetapi posisi awal dianggap sama dengan posisi tengah + 1. Demikian seterusnya sampai data tengah sama dengan yang dicari.

proses menggunakan Binary Searching cenderung lebih cepat dan efisien.
