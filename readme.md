# visitorpattern cpp demo code

## Overview

    Visitor Patternの使い方

## 使いどころ

    基底クラスへ変更を行うことなく、動的に機能を追加したい場合...でしょうか。  
    例ではNodeクラスを継承したFileクラスとDirectoryクラスが登場します。  
    これらのクラスはaccept関数を持ち、引数としてVisitorクラスを必要とします。  
    accept関数自体の処理は決まっており、Visitorクラスが持つvisit関数を呼び出します。  
    その際、引数として自分自身(FileクラスやDirectoryクラス)を渡す必要があります。  
    そうすることでVisitorクラスを継承した、実際に処理を行うクラス(FindVisitorクラス)では  
    同一のメソッド名でありながら、FileクラスやDirectoryクラスに依存した処理を実装することが出来ます。  
    
    FindVisitorクラスのように、Visitorクラスを継承することでFileクラスとDirectoryクラスに依存した処理を  
    動的に作成し、利用することが可能となります。  

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

[MIT](https://github.com/IwachanOrigin/visitorpattern_cpp/blob/master/LICENSE)

