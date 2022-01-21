# Makefile Cheatsheet - Kopya Kağıdı

### Kısa Bir Bilgi

Belge içerisinde `[]` (köşeli parantezler) arasına alınmış herhangi birşey görürseniz bu, parantezin içerisinde ki kısmın opsiyonel bir seçenek olduğunu belirtir. `<isim>` gibi bir ifade de `<>` arasına gelen kısmı sizin belirleyeceğiniz anlamına gelir.

Not: Bu cheatsheet GNUMake aracını ele alır.

### Make'e Alternatif Derleme Otomasyon Araçları

- [CMake](https://cmake.org/)
- [Rake](https://github.com/ruby/rake)
- [qmake](https://en.wikipedia.org/wiki/Qmake)
- [Ninja Build](https://ninja-build.org/)
- [Maven](https://maven.apache.org/)
- [SCons](https://www.scons.org/)
- [Gradle](https://gradle.org/)
- [Ant](https://ant.apache.org/)
- [Autoconf / Automake](https://www.gnu.org/software/automake/faq/autotools-faq.html)

### Geleneksel Olarak Kullanılan Kural İsimleri

- `all`:  tüm kuralları çalıştıran kök kural.
- `clean`: derleme işlemi ile beraber oluşan ara dosyaları siler.
- `fclean`: derleme işlemi ile beraber oluşan tüm dosyaları siler.

### Geleneksel Olarak Kullanılan Değişken İsimleri

- `CC`: C/C++ için geliştirilen uygulamalar da kullanılan derleyiciyi belirtmek için kullanılır.

- `CFLAGS`: C/C++ için geliştirilen uygulamalar da kullanılan derleyiciye verilecek parametreleri belirlemek için kullanlır.

- ` LIBS`: Genelde kullanlan derleyiciye verilen ve uygulama için gereken kütüphane dosyalarını belirtir

  > ```makefile
  > LIBS = -lm -lnsl # GCC/G++ için -l parametresi kullanılacak kütüphaneleri belirtir
  > ```

- `INCLUDES`: Programa dahil edilmesi gereken harici başlık veya kaynak dosyaların bulunduğu dizini belirtir.

- `.DEFAULT_GOAL`: Makefile dosyasında işlenecek varsayılan kuralı belirtir. Bu sayede `make` komutu dosya içerisinde ki kural sırasına bakmadan direk hedef kuralı çalıştırır.

### Sözdizimi

- `@`

  > Bir kural altında çalışan komutların ekrana basılmamasını sağlar. Örnek Makefile:
  >
  > ```makefile
  > ekrana_yaz:
  > 	echo "Merhaba Dünya!"
  > ```
  >
  > Bu Makefile'ın çıktısı şu şekilde olur:
  >
  > ```shell
  > $ make
  > echo "Merhaba Dünya!"
  > Merhaba Dünya!
  > $
  > ```
  >
  > Ekrana `echo "Merhaba Dünya!"` satırının ekrana basılmaması için başına `@` ekliyoruz:
  >
  > ```makefile
  > ekrana_yaz:
  > 	@echo "Merhaba Dünya!"
  > ```
  >
  > Bu Makefile'ın çıktısı şu şekilde olur:
  >
  > ```shell
  > $ make
  > Merhaba Dünya!
  > $
  > ```

- `$(<değişken adı>)`

  > Tanımlanan değişkenleri kullanmayı sağlar:
  >
  > ```makefile
  > MESAJ = "Merhaba Dünya"
  > ekrana_yaz:
  > 	@echo $(MESAJ)
  > ```
  >
  > Bu Makefile'ın çıktısı şu şekilde olur:
  >
  > ```shell
  > $ make
  > Merhaba Dünya!
  > $
  > ```



### Make Komutunun Kullanımı

- Makefile'ı işlemek:

  - ```shell
    make [<hedef kural>]
    ```

    > Eğer hedef kural belirtilmez ise `make` komutu Makefile içerisinde gördüğü ilk kuralı çalıştırır.

- Özel bir makefile dosyası belirtlemek:

  - ```shell
    make -f <Makefile dosyasının adı> [<hedef kural>]
    ```

    > `make` komutu varsayılan olarak **sırasıyla** şu Makefile dosyalarını arar:
    >
    > - GNUmakefile
    > - makefile
    > - Makefile
    >
    > Eğer bu dosyalardan hiçbirisi bulunamaz ve `-f` ile Makefile dosyası belirtilemez ise `make` komutu hata verir. 

​	

### Değişken Tanımlamak

```makefile
<degisken_adi> = <deger>
```

### Yorum Satırları

```makefile
# Bu bir yorum satırı
```

### Kural Tanımlaması

```makefile
<oluşturulacak dosya/kural adı>: <bağımlılık(lar)>
```

### Gömülü Değişkenler

- **` $< `** Değiştiği zaman hedefin yeniden oluşturulması gereken bağımlılıkları gösterir.    
- **` $@ `** Hedefi temsil eder.    
- **` $^ `** Geçerli kural için tüm bağımlılıkları temsil eder.    

### Uyumluluk Notları

- Kurallar arasında bir satır boş bırakılması *GNU make* için zorunlu olmamakla birlikte bazı Unix sürümleriyle uyumluluk için boşluk bırakılması gereklidir.



### Faydalanabileceğiniz Kaynaklar

* https://eksisozluk.com/makefile--161581
* https://www.youtube.com/watch?v=GExnnTaBELk&amp;t=97s
* http://www.belgeler.org/howto/makefile-nasil-kullanimi.html
* https://www.gnu.org/software/make/manual/make.html
* https://opensource.com/article/18/8/what-how-makefilejh