/**
 * @file StatusSubscriber.h
 * @brief 状態管理
 * @author tkhs
 * @date 2017 02 24 Friday
 */
#include <iostream>
#include "StatusSubscriber.h"

StatusSubscriber *StatusSubscriber::getInstance()
{
  if( s_instance == nullptr ) {
    s_instance = new StatusSubscriber;
  }
	return s_instance;
}
