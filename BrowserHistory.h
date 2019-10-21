#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>     // std::next, std::prev
#include <string>

using namespace std;

//create website struct/object which stores url and filesize
struct webSiteList{
  string url;
  size_t filesize;
  struct webSiteList* next;
  struct webSiteList* prev;
};


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
  webSiteList * head;
  webSiteList * tail;
};


  BrowserHistory::BrowserHistory(){
    //Create an empty doubly linked list of a history of websites
    head->prev=NULL;
    tail->next=NULL;
   }

  void BrowserHistory::visitSite(string url, size_t filesize){
    //Add a new site to the list
   webSiteList * curSite = new webSiteList;

    if (webSiteList->head == NULL){
      head->next =  curSite;
      tail =  NULL;
    }
    else{
      head->next = curSite;
      tail = NULL;
    }
  }

  void BrowserHistory::backButton(){
    //go back one page
    //if previous page=0, return error message
    webSiteList * prevSite = new webSiteList;
    if (webSiteList->prev == NULL){
      return NULL;
    }
    else{
      prevSite = next->curSite;
      return prevSite;
    }
  }

  void BrowserHistory::forwardButton(){
    //go forwardB
    //if next page=0, return error message
    webSiteList * nexSite = new webSiteList;
    if (webSiteList->next == NULL){
      return NULL;
    }
    else{
      nexSite = prev->curSite;
      return nexSite;
    }
  }

  void BrowserHistory::readFile(string fileName){
    //use while loop to read file.txt
    string myString;
    size_t myFileSize;
    string myUrl;
    
    while(myFile >> fileString){
      if(mystring=="visit"){
        fileName>>myUrl;
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
    return websiteList(curSite);
  }

  size_t getHistoryLength(){
    return websiteList.size();
  }

};
