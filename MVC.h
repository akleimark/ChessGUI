#ifndef MVC_H
#define MVC_H

#include <set>
#include <string>

class View;
class Model
{
    public:

    protected:
        Model() {}
        virtual ~Model() {}

};

class View
{
    public:

        View(Model *p_model, const std::string &vName):
        model(p_model), viewName(vName) {}
        virtual void render() = 0;
        bool operator<(const View &view) const {return viewName < view.viewName; }

    protected:
        const std::string viewName;
        Model *model;

};

class Controller
{
    protected:
        Model *model;
        View *view;
        Controller(Model *pModel, View *pView):
            model(pModel), view(pView) {}

    public:
        Model* getModel() { return model; }
        View* getView() { return view; }
};



#endif // MVC_H
