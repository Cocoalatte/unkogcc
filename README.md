# unkogcc
C言語実習ビルド簡素化

## なにこれ
Cの講義のとき、gccでコンパイルする際いちいち出力名を指定するのがめんどくさくなったからつくった

## 使い方
たとえばunko.cを入力する場合、

```
unkogcc unko.c
```

とすると、
```
gcc -o unko.c.out unko.c
```
を勝手に実行してくれる。math.hを使う場合はそのまま後ろに-lmしてください。（-lmは必ず後ろにつけてください。）

## 導入方法

```
gcc unkogcc.c　-o unkogcc
```

で生成されたunkogccをbinに入れるか、binにシンボリックを貼れば実行できるはずです。
