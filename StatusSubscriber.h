#ifndef STATUSSUBSCRIBER_H
#define STATUSSUBSCRIBER_H

class StatusSubscriber
{
public:
  static StatusSubscriber* getInstance();

protected:
  StatusSubscriber(){};
  ~StatusSubscriber(){};

private:
  static StatusSubscriber* s_instance;
}

#endif
