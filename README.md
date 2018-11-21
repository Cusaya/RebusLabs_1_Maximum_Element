# RebusLabs_1_Maximum_Element

21/11/2018

***0*** *Analiz & Genel

1. Dizi boyutu runtime'da gireceğimiz N sayisina göre belirleneceğinden malloc fonksiyonu ile N'e bağlı dinamik alan tahsis et. 
2. Bir for döngüsü N adet dönsün. Her dönüşte 3 type'dan hangisini istediğimizi switch seçim yapısı ile kontrol etsin.
3. case 1 için dinamik diziye pointer vasıtası ile eleman eklenir.
4. case 2 de diziden eleman silmek için yalnızca pointer'ı bir geri kaydırırız.Böylece girilecek yeni değer eskinin üzerine           yazılır.
5. Eğer yeni değer girilmezse, silinmiş öğe maximum eleman aramasında bir sorun teşkil etmeyecek.
6. Bunun sebebi case 1: ve case 2: durumları ile her karşılaşmamızı counter'lar ile sayıp, farkını maximum arama fonksyionuna parametre olarak yollamak. Böylece silinmemiş elemanlar üzerinde max value aranır.
7. Kontrol kodlarını yedekle ve temizle.

***1*** *Satır Girişi

1. N sayısını girdikten sonra satır kabul etmek için fgets fonksyionu kullanıldı.
2. sscanf ile string'i parçalara ayırdık. Bir adet ayırabilme için (case 2, case 3) 1, iki adet ayırabilme için (case 1) 2 scanned değeri geri döndürülür.
3. type değeri (1-2-3) her zaman int'e çevrilir.
4. Eğer iki değer scanned edilmiş ise bu muhakkak case 1'dir ve listeye eklenecek bir value vardır. Bu durumda value değeri de string'den int'e çevrilir.

***2*** *find_max fonksiyonu

1. Case 3'te çağrılan fonksyion. Geri dönüş değeri ekrana yazdırılır.
2. Basit bir maximum bulma fonksyionu.

