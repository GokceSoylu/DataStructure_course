# list
# stack
# queue
# Tree
# > binary
# >> binary search
# >> AVL(avl tree binary tree dir ancasck bst değildir)
# preority queue(heap) 
bir ağaç düşünün bianry search tree değil an ancak her zaman parent child'dan büyük/küçük (nmin heap dersek küçük, max heağp dersek büyük). 
bu şekilde silme de bir öncelik sırası takip etmiş oluyoruz. her zaman ilk elemanı yani root'u siliyoruz. pre (öncelik )her zaman bu parent 
ta (en büyük/küçükte) oluyor. eklerken en sondaki index e ekleriz. daha sonr abüyüklük  küçüklük durumuna uyup uymadığına bakılır. uymadığı 
durumda parent ve chil yer değiştirir. 
şimdii silerkende root'u sileriz dedik. peki başımız yok artık ne yapalım. SEÇİİMM hayır sakin ol :)) en sondaki elemanı alır başa ekleriz. 
daha sonra child ile ilşkisine bakıp sona kadar geliriz. bu en sonakşni başa eklşeme saçma olabilir neden en alakasızı başa ekliyoruz 
diyebilirsin ancak bu sayade tek tek tüm satırları k ontrol ediyoruz. önce hemn ikinci leveldekilerken en uygunu hangisi onu anlıyoruz daha  
sonra uygun olana başa geliyor bu sefer onun yerine hangisi gelmeküli ona bakıyoruz bu şekşlde tekrardan bir dizayna sağlanıyor. Unutmayalım 
preority queue yaaprken  binary tree kullanıyoruz ancak bst değil(asllında binary olmak zorunda değil istersek üçlü falanda olur fark 
etmez). Ayrıca bu ağaç Soldan sağa doldurulur. hiç bir kısmı baoş geçmeyiz.
    Gelelim zurnanın aha dediği yere. biz bunu pc ye nasıl öğreticez. bunu  bir diziye aktarıyoruz root'u ilk elemanı diznin 1. elemanın 
ekliyoruz gerisinide sodan sağa yaprakları diziye sırasıyla ekliyoruz. şimdi ağaçta soldan sağa boşluk  bırakmadan ekleme yapılması mantıklı geldi değil mi? 
??aklımda deli sorular. peki ya bu 
# graph
