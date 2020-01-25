#ifndef PIPE_H_INCLUDED
#define PIPE_H_INCLUDED


class lole
{
public :
    void set_direction (int);
    int get_direction ();
    virtual void draw () = 0 ;
protected:
   unsigned int direction;

};


#endif // PIPE_H_INCLUDED
