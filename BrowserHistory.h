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
   webSiteList* curSite = new webSiteList;

    if (head == NULL){
      head -> curSite;
      tail -> curSite;
    }
    else{
      head -> prev;
      tail -> curSite;
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
    return websiteList(curSite);
  }

  size_t getHistoryLength(){
    return websiteList.size();
  }

};
