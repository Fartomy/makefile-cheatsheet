Makefile Cheatsheet (Kopya Kağıdı)
==================================

Burada bir C programı için yazılmış basit Makefile örnekleri bulacaksınız. Ayrıca takıldığınız noktalarda sorunuzun cevabına hızlıca ulaşabilmeniz için ufak bir cheatsheet hazırladım. 

### Drawio ile .jpeg Dosyasını Oluşturmak

[Bu](https://github.com/jgraph/drawio-desktop/releases) adresten drawio'nun sisteminize uygun olan sürümünü kurun. `sources/gcc_compile_steps.drawio` dosyasını drawio yardımıyla açın. Program içerisinde sırasıyla `Dosya > Farklı Dışa Aktar > İstediğiniz resim formatı` yolunu takip ederek görseli oluşturun. 

Not: Eğer bir Linux dağıtımı kullanıyorsanız bu işi yapmak için repo'nun kök dizinin de bulunan Makefile dosyasını da kullanabilirsiniz. Bunun için Makefile içerisinde bulunan:

```makefile
drawio_appimage			= ~/Applications/drawio.AppImage
```

satırını drawio'nun AppImage konumuna göre düzenleyin.
