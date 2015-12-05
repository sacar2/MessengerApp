/********************************************************************************
** Form generated from reading UI file 'chatroom.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATROOM_H
#define UI_CHATROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_chatRoom
{
public:
    QTextEdit *textEdit;
    QListView *chatView;
    QToolButton *gifButton;
    QToolButton *emojiButton;
    QToolButton *toolButton_3;

    void setupUi(QDialog *chatRoom)
    {
        if (chatRoom->objectName().isEmpty())
            chatRoom->setObjectName(QStringLiteral("chatRoom"));
        chatRoom->resize(400, 346);
        textEdit = new QTextEdit(chatRoom);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 259, 381, 81));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        chatView = new QListView(chatRoom);
        chatView->setObjectName(QStringLiteral("chatView"));
        chatView->setGeometry(QRect(10, 0, 381, 221));
        gifButton = new QToolButton(chatRoom);
        gifButton->setObjectName(QStringLiteral("gifButton"));
        gifButton->setGeometry(QRect(200, 220, 61, 41));
        emojiButton = new QToolButton(chatRoom);
        emojiButton->setObjectName(QStringLiteral("emojiButton"));
        emojiButton->setGeometry(QRect(270, 220, 61, 41));
        toolButton_3 = new QToolButton(chatRoom);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(340, 220, 51, 41));

        retranslateUi(chatRoom);

        QMetaObject::connectSlotsByName(chatRoom);
    } // setupUi

    void retranslateUi(QDialog *chatRoom)
    {
        chatRoom->setWindowTitle(QApplication::translate("chatRoom", "Dialog", 0));
        gifButton->setText(QApplication::translate("chatRoom", "...", 0));
        emojiButton->setText(QApplication::translate("chatRoom", "gif", 0));
        toolButton_3->setText(QApplication::translate("chatRoom", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class chatRoom: public Ui_chatRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOM_H
