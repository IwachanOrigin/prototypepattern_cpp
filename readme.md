# prototypepattern cpp demo code

## Overview

    Prototype Patternの使い方

## 使いどころ

    GUIのように部品を毎回配置するのではなく、既に追加した部品をコピペして追加するような場合に実装されていると便利なパターンです。  
    他にも、先に追加したオブジェクトを1から生成するのではなく、コピーしてオブジェクトを生成するようなことがあるのなら実装すべきパターンです。

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/prototypepattern_cpp/blob/master/LICENSE)

