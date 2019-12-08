/********************************************************************************
** Form generated from reading UI file 'blockbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKBROWSER_H
#define UI_BLOCKBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockBrowser
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *layoutWidgetBE1;
    QHBoxLayout *horizontalLayoutBE;
    QLabel *labelBlockBroeser;
    QSpacerItem *horizontalSpacerBE;
    QWidget *layoutWidgetBE2;
    QGridLayout *gridLayoutBE;
    QSpacerItem *verticalSpacer;
    QPushButton *txButton;
    QLabel *inputLabel;
    QLabel *hashRateBox;
    QLabel *valueLabel;
    QLabel *txLabel;
    QLabel *diffBox;
    QLabel *txID;
    QLabel *inputBox;
    QLabel *valueBox;
    QLabel *diffLabel;
    QSpinBox *heightBox;
    QLabel *heightLabelBE2;
    QLabel *timeBox;
    QPushButton *blockButton;
    QLabel *merkleLabel;
    QLabel *hashLabel;
    QLabel *feesBox;
    QLabel *hashRateLabel;
    QLabel *heightLabelBE1;
    QLabel *feesLabel;
    QLabel *bitsLabel;
    QLabel *bitsBox;
    QLabel *merkleBox;
    QLabel *outputLabel;
    QLabel *outputBox;
    QLabel *nonceLabel;
    QLabel *nonceBox;
    QLabel *timeLabel;
    QLabel *hashBox;
    QLineEdit *txBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *closeButton;

    void setupUi(QDialog *BlockBrowser)
    {
        if (BlockBrowser->objectName().isEmpty())
            BlockBrowser->setObjectName(QStringLiteral("BlockBrowser"));
        BlockBrowser->setWindowModality(Qt::NonModal);
        BlockBrowser->setEnabled(true);
        BlockBrowser->resize(850, 524);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockBrowser->sizePolicy().hasHeightForWidth());
        BlockBrowser->setSizePolicy(sizePolicy);
        BlockBrowser->setMinimumSize(QSize(0, 0));
        BlockBrowser->setAcceptDrops(false);
        gridLayout = new QGridLayout(BlockBrowser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(21, 10, 10, -1);
        widget = new QWidget(BlockBrowser);
        widget->setObjectName(QStringLiteral("widget"));
        layoutWidgetBE1 = new QWidget(widget);
        layoutWidgetBE1->setObjectName(QStringLiteral("layoutWidgetBE1"));
        layoutWidgetBE1->setGeometry(QRect(0, 0, 822, 27));
        horizontalLayoutBE = new QHBoxLayout(layoutWidgetBE1);
        horizontalLayoutBE->setSpacing(7);
        horizontalLayoutBE->setObjectName(QStringLiteral("horizontalLayoutBE"));
        horizontalLayoutBE->setContentsMargins(0, 0, 0, 0);
        labelBlockBroeser = new QLabel(layoutWidgetBE1);
        labelBlockBroeser->setObjectName(QStringLiteral("labelBlockBroeser"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelBlockBroeser->sizePolicy().hasHeightForWidth());
        labelBlockBroeser->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelBlockBroeser->setFont(font);
        labelBlockBroeser->setStyleSheet(QStringLiteral("font-weight:bold;"));

        horizontalLayoutBE->addWidget(labelBlockBroeser);

        horizontalSpacerBE = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutBE->addItem(horizontalSpacerBE);

        layoutWidgetBE2 = new QWidget(widget);
        layoutWidgetBE2->setObjectName(QStringLiteral("layoutWidgetBE2"));
        layoutWidgetBE2->setGeometry(QRect(0, 30, 812, 410));
        gridLayoutBE = new QGridLayout(layoutWidgetBE2);
        gridLayoutBE->setObjectName(QStringLiteral("gridLayoutBE"));
        gridLayoutBE->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayoutBE->setHorizontalSpacing(7);
        gridLayoutBE->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutBE->addItem(verticalSpacer, 18, 0, 1, 1);

        txButton = new QPushButton(layoutWidgetBE2);
        txButton->setObjectName(QStringLiteral("txButton"));

        gridLayoutBE->addWidget(txButton, 12, 1, 1, 1);

        inputLabel = new QLabel(layoutWidgetBE2);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayoutBE->addWidget(inputLabel, 17, 0, 1, 1);

        hashRateBox = new QLabel(layoutWidgetBE2);
        hashRateBox->setObjectName(QStringLiteral("hashRateBox"));
        hashRateBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(hashRateBox, 10, 1, 1, 1);

        valueLabel = new QLabel(layoutWidgetBE2);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        gridLayoutBE->addWidget(valueLabel, 14, 0, 1, 1);

        txLabel = new QLabel(layoutWidgetBE2);
        txLabel->setObjectName(QStringLiteral("txLabel"));

        gridLayoutBE->addWidget(txLabel, 13, 0, 1, 1);

        diffBox = new QLabel(layoutWidgetBE2);
        diffBox->setObjectName(QStringLiteral("diffBox"));
        diffBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(diffBox, 9, 1, 1, 1);

        txID = new QLabel(layoutWidgetBE2);
        txID->setObjectName(QStringLiteral("txID"));
        txID->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(txID, 13, 1, 1, 1);

        inputBox = new QLabel(layoutWidgetBE2);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        inputBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(inputBox, 17, 1, 1, 1);

        valueBox = new QLabel(layoutWidgetBE2);
        valueBox->setObjectName(QStringLiteral("valueBox"));
        valueBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(valueBox, 14, 1, 1, 1);

        diffLabel = new QLabel(layoutWidgetBE2);
        diffLabel->setObjectName(QStringLiteral("diffLabel"));

        gridLayoutBE->addWidget(diffLabel, 9, 0, 1, 1);

        heightBox = new QSpinBox(layoutWidgetBE2);
        heightBox->setObjectName(QStringLiteral("heightBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(heightBox->sizePolicy().hasHeightForWidth());
        heightBox->setSizePolicy(sizePolicy2);
        heightBox->setMaximum(99999999);

        gridLayoutBE->addWidget(heightBox, 1, 0, 1, 1);

        heightLabelBE2 = new QLabel(layoutWidgetBE2);
        heightLabelBE2->setObjectName(QStringLiteral("heightLabelBE2"));

        gridLayoutBE->addWidget(heightLabelBE2, 3, 0, 1, 1);

        timeBox = new QLabel(layoutWidgetBE2);
        timeBox->setObjectName(QStringLiteral("timeBox"));
        timeBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(timeBox, 8, 1, 1, 1);

        blockButton = new QPushButton(layoutWidgetBE2);
        blockButton->setObjectName(QStringLiteral("blockButton"));

        gridLayoutBE->addWidget(blockButton, 1, 1, 1, 1);

        merkleLabel = new QLabel(layoutWidgetBE2);
        merkleLabel->setObjectName(QStringLiteral("merkleLabel"));

        gridLayoutBE->addWidget(merkleLabel, 5, 0, 1, 1);

        hashLabel = new QLabel(layoutWidgetBE2);
        hashLabel->setObjectName(QStringLiteral("hashLabel"));

        gridLayoutBE->addWidget(hashLabel, 4, 0, 1, 1);

        feesBox = new QLabel(layoutWidgetBE2);
        feesBox->setObjectName(QStringLiteral("feesBox"));
        feesBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(feesBox, 15, 1, 1, 1);

        hashRateLabel = new QLabel(layoutWidgetBE2);
        hashRateLabel->setObjectName(QStringLiteral("hashRateLabel"));

        gridLayoutBE->addWidget(hashRateLabel, 10, 0, 1, 1);

        heightLabelBE1 = new QLabel(layoutWidgetBE2);
        heightLabelBE1->setObjectName(QStringLiteral("heightLabelBE1"));
        heightLabelBE1->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(heightLabelBE1, 3, 1, 1, 1);

        feesLabel = new QLabel(layoutWidgetBE2);
        feesLabel->setObjectName(QStringLiteral("feesLabel"));

        gridLayoutBE->addWidget(feesLabel, 15, 0, 1, 1);

        bitsLabel = new QLabel(layoutWidgetBE2);
        bitsLabel->setObjectName(QStringLiteral("bitsLabel"));

        gridLayoutBE->addWidget(bitsLabel, 7, 0, 1, 1);

        bitsBox = new QLabel(layoutWidgetBE2);
        bitsBox->setObjectName(QStringLiteral("bitsBox"));
        bitsBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(bitsBox, 7, 1, 1, 1);

        merkleBox = new QLabel(layoutWidgetBE2);
        merkleBox->setObjectName(QStringLiteral("merkleBox"));
        merkleBox->setMinimumSize(QSize(187, 0));
        merkleBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(merkleBox, 5, 1, 1, 1);

        outputLabel = new QLabel(layoutWidgetBE2);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayoutBE->addWidget(outputLabel, 16, 0, 1, 1);

        outputBox = new QLabel(layoutWidgetBE2);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        outputBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(outputBox, 16, 1, 1, 1);

        nonceLabel = new QLabel(layoutWidgetBE2);
        nonceLabel->setObjectName(QStringLiteral("nonceLabel"));

        gridLayoutBE->addWidget(nonceLabel, 6, 0, 1, 1);

        nonceBox = new QLabel(layoutWidgetBE2);
        nonceBox->setObjectName(QStringLiteral("nonceBox"));
        nonceBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(nonceBox, 6, 1, 1, 1);

        timeLabel = new QLabel(layoutWidgetBE2);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        gridLayoutBE->addWidget(timeLabel, 8, 0, 1, 1);

        hashBox = new QLabel(layoutWidgetBE2);
        hashBox->setObjectName(QStringLiteral("hashBox"));
        hashBox->setEnabled(true);
        sizePolicy.setHeightForWidth(hashBox->sizePolicy().hasHeightForWidth());
        hashBox->setSizePolicy(sizePolicy);
        hashBox->setMinimumSize(QSize(0, 0));
        hashBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayoutBE->addWidget(hashBox, 4, 1, 1, 1);

        txBox = new QLineEdit(layoutWidgetBE2);
        txBox->setObjectName(QStringLiteral("txBox"));
        sizePolicy2.setHeightForWidth(txBox->sizePolicy().hasHeightForWidth());
        txBox->setSizePolicy(sizePolicy2);

        gridLayoutBE->addWidget(txBox, 12, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutBE->addItem(verticalSpacer_2, 11, 0, 1, 1);

        closeButton = new QPushButton(widget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(0, 470, 75, 23));

        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(BlockBrowser);

        QMetaObject::connectSlotsByName(BlockBrowser);
    } // setupUi

    void retranslateUi(QDialog *BlockBrowser)
    {
        BlockBrowser->setWindowTitle(QApplication::translate("BlockBrowser", "IncaKoin Block Browser", Q_NULLPTR));
        labelBlockBroeser->setText(QApplication::translate("BlockBrowser", "Block Browser", Q_NULLPTR));
        txButton->setText(QApplication::translate("BlockBrowser", "Decode Transaction", Q_NULLPTR));
        inputLabel->setText(QApplication::translate("BlockBrowser", "Inputs:", Q_NULLPTR));
        hashRateBox->setText(QApplication::translate("BlockBrowser", "0000 MH/s", Q_NULLPTR));
        valueLabel->setText(QApplication::translate("BlockBrowser", "Value out:", Q_NULLPTR));
        txLabel->setText(QApplication::translate("BlockBrowser", "Transaction ID:", Q_NULLPTR));
        diffBox->setText(QApplication::translate("BlockBrowser", "0.00", Q_NULLPTR));
        txID->setText(QApplication::translate("BlockBrowser", "000", Q_NULLPTR));
        inputBox->setText(QString());
        valueBox->setText(QString());
        diffLabel->setText(QApplication::translate("BlockBrowser", "Block Difficulty:", Q_NULLPTR));
        heightLabelBE2->setText(QApplication::translate("BlockBrowser", "Block Height:", Q_NULLPTR));
        timeBox->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        blockButton->setText(QApplication::translate("BlockBrowser", "Jump to Block", Q_NULLPTR));
        merkleLabel->setText(QApplication::translate("BlockBrowser", "Block Merkle:", Q_NULLPTR));
        hashLabel->setText(QApplication::translate("BlockBrowser", "Block Hash:", Q_NULLPTR));
        feesBox->setText(QString());
        hashRateLabel->setText(QApplication::translate("BlockBrowser", "Block Hashrate:", Q_NULLPTR));
        heightLabelBE1->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        feesLabel->setText(QApplication::translate("BlockBrowser", "Fees:", Q_NULLPTR));
        bitsLabel->setText(QApplication::translate("BlockBrowser", "Block nBits:", Q_NULLPTR));
        bitsBox->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        merkleBox->setText(QApplication::translate("BlockBrowser", "0x0", Q_NULLPTR));
        outputLabel->setText(QApplication::translate("BlockBrowser", "Outputs:", Q_NULLPTR));
        outputBox->setText(QString());
        nonceLabel->setText(QApplication::translate("BlockBrowser", "Block nNonce:", Q_NULLPTR));
        nonceBox->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("BlockBrowser", "Block Timestamp:", Q_NULLPTR));
        hashBox->setText(QApplication::translate("BlockBrowser", "0x0", Q_NULLPTR));
        txBox->setInputMask(QString());
        txBox->setPlaceholderText(QString());
        closeButton->setText(QApplication::translate("BlockBrowser", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BlockBrowser: public Ui_BlockBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKBROWSER_H
