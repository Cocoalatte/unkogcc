# unkogcc
うんこ曰く省けよカオス

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
を勝手に実行してくれる。math.hを使う場合はそのまま後ろに-lmしてください。

## 導入方法

```
gcc -o unkogcc unkogcc.c
```

で生成されたunkogccをbinにいれるなり、binにlnするなり。
