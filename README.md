# 🚗 Sistem Perhitungan Tarif Parkir

## 👥 Informasi Proyek

Proyek ini merupakan **tugas dari Peer Group** yang dikerjakan secara berkelompok dengan jumlah anggota **4 orang**.
Tujuan dari pembuatan proyek ini adalah untuk mempraktikkan penggunaan **bahasa pemrograman C++** dalam menyelesaikan kasus nyata, yaitu perhitungan tarif parkir kendaraan.

### 📌 Daftar Anggota Kelompok

1. Nur Akbar Putra Perdana (2507071011)
2. M. Abbas Marzuki (2507071022)
3. M. Arrafi Parulian Sihite (2507071024)
4. Ananda Raihan Alfarizi (25070701013)

---

## 📌 Latar Belakang

Parkir merupakan salah satu layanan penting yang ada hampir di setiap fasilitas umum, seperti pusat perbelanjaan, kantor, hingga rumah sakit. Dalam praktiknya, perhitungan tarif parkir masih sering dilakukan secara manual sehingga rawan terjadi kesalahan perhitungan, terutama jika jumlah kendaraan yang diproses cukup banyak.

Proyek ini dibuat untuk **membantu proses perhitungan tarif parkir secara otomatis menggunakan bahasa C++**, sehingga lebih cepat, akurat, dan efisien.

---

## 🎯 Kegunaan Proyek

* Menghitung biaya parkir kendaraan bermotor dan mobil berdasarkan lama parkir.
* Memberikan tarif khusus jika kendaraan parkir lebih dari 24 jam.
* Menampilkan total biaya parkir dari semua kendaraan yang tercatat.
* Bisa dijadikan **simulasi aplikasi manajemen parkir sederhana**.

---

## 🔄 Alur Proyek

1. Program meminta input jumlah kendaraan.
2. Untuk setiap kendaraan:

   * User memasukkan jenis kendaraan (`1 = motor`, `2 = mobil`).
   * User memasukkan lama parkir (dalam jam).
   * Program menghitung tarif parkir sesuai aturan.
   * Jika lama parkir **> 24 jam**, program memberikan tarif flat (Rp 40.000 untuk motor, Rp 100.000 untuk mobil).
   * Biaya ditampilkan dan ditambahkan ke total.
3. Setelah semua kendaraan diproses, ditampilkan total biaya parkir keseluruhan.

---

## 🧮 Algoritma

1. **Input jumlah kendaraan (n).**
2. **Looping sebanyak n kali**:

   * Input jenis kendaraan dan lama parkir.
   * Tentukan tarif per jam berdasarkan jenis kendaraan:

     * Motor: Rp 2.000/jam.
     * Mobil: Rp 5.000/jam.
   * Jika lama parkir ≤ 24 jam → tarif = tarifPerJam × jam.
   * Jika lama parkir > 24 jam → gunakan tarif flat.
   * Tampilkan biaya per kendaraan.
   * Akumulasi ke total biaya.
3. **Output total biaya seluruh kendaraan.**

---

## 📊 Flowchart

```
          ┌───────────────┐
          │ Mulai Program │
          └───────┬───────┘
                  │
      ┌───────────▼───────────┐
      │ Input jumlah kendaraan │
      └───────────┬───────────┘
                  │
        ┌─────────▼─────────┐
        │ Loop sebanyak n    │
        └─────────┬─────────┘
                  │
      ┌───────────▼───────────┐
      │ Input jenis & jam parkir│
      └───────────┬───────────┘
                  │
      ┌───────────▼───────────┐
      │ Hitung biaya per jam   │
      └───────────┬───────────┘
                  │
        ┌─────────▼─────────┐
        │ Jam > 24 ?         │
        └───┬───────────┬───┘
            │           │
         Ya │           │ Tidak
            │           │
 ┌──────────▼──────┐   ┌─▼──────────┐
 │ Tarif Flat Motor │   │ Tarif x Jam│
 │ Rp 40.000        │   └────────────┘
 └──────────┬──────┘
            │
 ┌──────────▼───────────┐
 │ Tambahkan ke total    │
 └──────────┬───────────┘
            │
   ┌────────▼────────┐
   │ Semua selesai?   │
   └───┬───────────┬─┘
       │           │
      Tidak        Ya
       │           │
       ▼           ▼
   Kembali Loop   Tampilkan total
                   biaya parkir
                      │
                  ┌───▼───┐
                  │ Selesai│
                  └───────┘
```

---

## ✨ Fitur

* **Input Multi Kendaraan**: dapat memproses banyak kendaraan sekaligus.
* **Dua Jenis Kendaraan**: mendukung motor dan mobil.
* **Perhitungan Otomatis**: tarif dihitung sesuai lama parkir.
* **Tarif Flat > 24 Jam**: motor Rp 40.000, mobil Rp 100.000.
* **Output Rinci**: menampilkan biaya tiap kendaraan dan total keseluruhan.

---

## 🖥️ Contoh Penggunaan Program

### Kasus 1: 2 Kendaraan (Motor dan Mobil, < 24 jam)

```
Masukkan jumlah kendaraan: 2

Kendaraan ke-1
Jenis kendaraan (1. motor/2. mobil): 1
Lama parkir (jam): 3
Biaya parkir: Rp. 6000

Kendaraan ke-2
Jenis kendaraan (1. motor/2. mobil): 2
Lama parkir (jam): 5
Biaya parkir: Rp. 25000

Total semua biaya parkir: Rp. 31000
```

---

### Kasus 2: Kendaraan parkir lebih dari 24 jam (Motor dan Mobil)

```
Masukkan jumlah kendaraan: 2

Kendaraan ke-1
Jenis kendaraan (1. motor/2. mobil): 1
Lama parkir (jam): 30
Total biaya : RP. 40000

Kendaraan ke-2
Jenis kendaraan (1. motor/2. mobil): 2
Lama parkir (jam): 50
Total biaya : Rp. 100000

Total semua biaya parkir: Rp. 140000
```

---

### Kasus 3: Input salah (jenis kendaraan tidak dikenal)

```
Masukkan jumlah kendaraan: 1

Kendaraan ke-1
Jenis kendaraan (1. motor/2. mobil): 3
Lama parkir (jam): 2
Jenis kendaraan tidak dikenal!
Biaya parkir: Rp. 0

Total semua biaya parkir: Rp. 0
```

---

## 🛠️ Teknologi

* Bahasa: **C++**
* Konsep utama: **fungsi, percabangan (if-else), perulangan (for loop)**
