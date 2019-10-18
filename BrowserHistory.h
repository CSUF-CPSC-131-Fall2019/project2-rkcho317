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

  //create website struct/object which stores url and filesize
  struct webSiteList{
    string url;
    size_t filesize;
    struct webSite* next;
    struct webSite* prev;
  }

  BrowserHistory::BrowserHistory{
    //Create a linked list of a history of websites
    //queue
   struct webSiteList;
   head -> webSiteList = NULL;
   prev -> webSiteList = NULL;
   next -> webSiteList = NULL;
  }

  void BrowserHistory::visitSite(string url, size_t filesize){
    struct webSiteList* newSite;

    webSiteList.append(newSite);

    if (head->webSiteList == NULL){
      head->webSiteList = newSite;
      tail->webSiteList = newSite;
    }
    else{
      list->head = prev;
      list->current = newSite;
      list->tail = NULL;
    }

  }

  void BrowserHistory::backButton(){
    //go back one page
    //if previous page=0, return error message
    if (prev != NULL){
      return prev;
    }
    else{
      return NULL;
    }
  }

  void BrowserHistory::forwardButton(){
    //go forwardB
    //if next page=0, return error message
    if (next != NULL){
      return next;
    }
    else{
      return NULL;
    }
  }

  void BrowserHistory::readFile(string fileName){
    //use while loop to read file.txt
    while(myFilee >> fileString){
      if(mystring=="visit"){
        myFileName>>myUrl;
        myFileSize>>mySize;
      }
      else{
        //error
        cout << "ERROR"<<endl;
        return 0;
      }
    }
  }

  string BrowserHistory::string currentUrl(){
    if (currentUrl != NULL){
      cout<<"Your current website is: "<<string<<endl;
    }
    else{
      return NULL;
    }
  }

  size_t currentPageSize(){
    return list.position of url;
  };

  size_t getHistoryLength(){
    [queue].size();
  };

};
