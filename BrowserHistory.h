#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>     // std::next, std::prev

using std::string;

class BrowserHistory {
public:
    BrowserHistory();

    void visitSite(string url, size_t filesize);
    void backButton();
    void forwardButton();

    void readFile(string fileName);

    string currentUrl();
    size_t currentPageSize();
    size_t getHistoryLength();

private:
  // TO BE COMPLETED
  BrowserHistory::BrowserHistory{

  }

  void BrowserHistory::visitSite(string url, size_t filesize){

  }

  void BrowserHistory::backButton(){

  }

  void BrowserHistory::forwardButton(){

  }

  void BrowserHistory::readFile(string fileName){

  }

  string BrowserHistory::string currentUrl(){

  }

  size_t currentPageSize();
  size_t getHistoryLength();

};
