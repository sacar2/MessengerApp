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
        gifButton->setGeometry(QRect(10, 220, 61, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/emojibutton.png"), QSize(), QIcon::Normal, QIcon::Off);
        gifButton->setIcon(icon);
        gifButton->setIconSize(QSize(21, 21));
        emojiButton = new QToolButton(chatRoom);
        emojiButton->setObjectName(QStringLiteral("emojiButton"));
        emojiButton->setGeometry(QRect(90, 220, 61, 41));
        QFont font;
        font.setFamily(QStringLiteral("Futura"));
        font.setPointSize(14);
        emojiButton->setFont(font);
        toolButton_3 = new QToolButton(chatRoom);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(330, 220, 60, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon1);
        toolButton_3->setIconSize(QSize(26, 26));
        gifButton->raise();
        emojiButton->raise();
        toolButton_3->raise();
        textEdit->raise();
        chatView->raise();

        retranslateUi(chatRoom);

        QMetaObject::connectSlotsByName(chatRoom);
    } // setupUi

    void retranslateUi(QDialog *chatRoom)
    {
        chatRoom->setWindowTitle(QApplication::translate("chatRoom", "Dialog", 0));
#ifndef QT_NO_TOOLTIP
        gifButton->setToolTip(QApplication::translate("chatRoom", "<html><head/><body><p><img src=\":/new/prefix1/emojibutton.png\"/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gifButton->setText(QString());
        emojiButton->setText(QApplication::translate("chatRoom", "gif", 0));
        toolButton_3->setText(QApplication::translate("chatRoom", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class chatRoom: public Ui_chatRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOM_H
