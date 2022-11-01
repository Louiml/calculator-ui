#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
int main(int argc, char* argv[]){
    QGuiApplication app(argc, argv);
    qmlRegisterType<CalculatorStateMachine>("CalculatorStateMachine", 1, 0,"CalculatorStateMachine");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
    return -1;
    return app.exec();
}
