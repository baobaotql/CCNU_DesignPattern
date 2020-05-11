/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_save;
    QAction *action_saveas;
    QAction *action_quit;
    QAction *action_undo;
    QAction *action_redo;
    QAction *action_copy;
    QAction *action_cut;
    QAction *action_paste;
    QAction *action_selectAll;
    QAction *action_delete;
    QAction *action_flip;
    QAction *action_excude;
    QAction *action_property;
    QAction *action_setWallpaper;
    QAction *action_help;
    QAction *action_changelog;
    QAction *action_about;
    QAction *action_new;
    QAction *actionPencil;
    QAction *actionLine;
    QAction *actionEllipse;
    QAction *actionRect;
    QAction *actionText;
    QAction *actionErase;
    QAction *actionMove;
    QAction *actionRectSelect;
    QAction *actionColorFill;
    QAction *actionColorBorder;
    QAction *actionFont;
    QAction *actionCutSelect;
    QAction *actionFill;
    QAction *action_aboutQt;
    QAction *actionZoomin;
    QAction *actionZoomout;
    QAction *actionZoom1;
    QAction *actionRotateRight;
    QAction *actionRotateLeft;
    QAction *actionMirrorHorizontal;
    QAction *actionMirrorVertical;
    QAction *action_gray;
    QAction *action_invert;
    QAction *action_import;
    QAction *action_blur;
    QAction *actionColorPicker;
    QAction *actionArrow;
    QAction *action_transparent;
    QAction *action_mosaic;
    QAction *action_matting;
    QAction *action_adjustRGB;
    QAction *action_clipPath;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_file;
    QMenu *menu_edit;
    QMenu *menu_image;
    QMenu *menu_about;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1083, 648);
        MainWindow->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/baobaoPaint.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QStringLiteral("action_open"));
        QIcon icon1;
        QString iconThemeName = QStringLiteral("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_open->setIcon(icon1);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QStringLiteral("action_save"));
        QIcon icon2;
        iconThemeName = QStringLiteral("document-save");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_save->setIcon(icon2);
        action_saveas = new QAction(MainWindow);
        action_saveas->setObjectName(QStringLiteral("action_saveas"));
        QIcon icon3;
        iconThemeName = QStringLiteral("document-save-as");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_saveas->setIcon(icon3);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName(QStringLiteral("action_quit"));
        QIcon icon4;
        iconThemeName = QStringLiteral("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_quit->setIcon(icon4);
        action_undo = new QAction(MainWindow);
        action_undo->setObjectName(QStringLiteral("action_undo"));
        QIcon icon5;
        iconThemeName = QStringLiteral("edit-undo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_undo->setIcon(icon5);
        action_redo = new QAction(MainWindow);
        action_redo->setObjectName(QStringLiteral("action_redo"));
        QIcon icon6;
        iconThemeName = QStringLiteral("edit-redo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_redo->setIcon(icon6);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName(QStringLiteral("action_copy"));
        QIcon icon7;
        iconThemeName = QStringLiteral("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_copy->setIcon(icon7);
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName(QStringLiteral("action_cut"));
        QIcon icon8;
        iconThemeName = QStringLiteral("edit-cut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_cut->setIcon(icon8);
        action_paste = new QAction(MainWindow);
        action_paste->setObjectName(QStringLiteral("action_paste"));
        QIcon icon9;
        iconThemeName = QStringLiteral("edit-paste");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_paste->setIcon(icon9);
        action_selectAll = new QAction(MainWindow);
        action_selectAll->setObjectName(QStringLiteral("action_selectAll"));
        QIcon icon10;
        iconThemeName = QStringLiteral("edit-select-all");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_selectAll->setIcon(icon10);
        action_delete = new QAction(MainWindow);
        action_delete->setObjectName(QStringLiteral("action_delete"));
        QIcon icon11;
        iconThemeName = QStringLiteral("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_delete->setIcon(icon11);
        action_flip = new QAction(MainWindow);
        action_flip->setObjectName(QStringLiteral("action_flip"));
        action_excude = new QAction(MainWindow);
        action_excude->setObjectName(QStringLiteral("action_excude"));
        action_property = new QAction(MainWindow);
        action_property->setObjectName(QStringLiteral("action_property"));
        QIcon icon12;
        iconThemeName = QStringLiteral("document-properties");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_property->setIcon(icon12);
        action_setWallpaper = new QAction(MainWindow);
        action_setWallpaper->setObjectName(QStringLiteral("action_setWallpaper"));
        QIcon icon13;
        iconThemeName = QStringLiteral("computer");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_setWallpaper->setIcon(icon13);
        action_help = new QAction(MainWindow);
        action_help->setObjectName(QStringLiteral("action_help"));
        QIcon icon14;
        iconThemeName = QStringLiteral("help-contents");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon14 = QIcon::fromTheme(iconThemeName);
        } else {
            icon14.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_help->setIcon(icon14);
        action_changelog = new QAction(MainWindow);
        action_changelog->setObjectName(QStringLiteral("action_changelog"));
        QIcon icon15;
        iconThemeName = QStringLiteral("help-faq");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon15 = QIcon::fromTheme(iconThemeName);
        } else {
            icon15.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_changelog->setIcon(icon15);
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QStringLiteral("action_about"));
        QIcon icon16;
        iconThemeName = QStringLiteral("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon16 = QIcon::fromTheme(iconThemeName);
        } else {
            icon16.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_about->setIcon(icon16);
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QStringLiteral("action_new"));
        QIcon icon17;
        iconThemeName = QStringLiteral("document-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon17 = QIcon::fromTheme(iconThemeName);
        } else {
            icon17.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_new->setIcon(icon17);
        actionPencil = new QAction(MainWindow);
        actionPencil->setObjectName(QStringLiteral("actionPencil"));
        actionPencil->setCheckable(true);
        actionPencil->setChecked(false);
        actionPencil->setEnabled(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPencil->setIcon(icon18);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QStringLiteral("actionLine"));
        actionLine->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon19);
        actionEllipse = new QAction(MainWindow);
        actionEllipse->setObjectName(QStringLiteral("actionEllipse"));
        actionEllipse->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEllipse->setIcon(icon20);
        actionRect = new QAction(MainWindow);
        actionRect->setObjectName(QStringLiteral("actionRect"));
        actionRect->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/rect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRect->setIcon(icon21);
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QStringLiteral("actionText"));
        actionText->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon22);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QStringLiteral("actionErase"));
        actionErase->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon23);
        actionMove = new QAction(MainWindow);
        actionMove->setObjectName(QStringLiteral("actionMove"));
        actionMove->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/move.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove->setIcon(icon24);
        actionRectSelect = new QAction(MainWindow);
        actionRectSelect->setObjectName(QStringLiteral("actionRectSelect"));
        actionRectSelect->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/rectselect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectSelect->setIcon(icon25);
        actionColorFill = new QAction(MainWindow);
        actionColorFill->setObjectName(QStringLiteral("actionColorFill"));
        actionColorFill->setCheckable(false);
        actionColorFill->setChecked(false);
        QFont font;
        font.setPointSize(13);
        actionColorFill->setFont(font);
        actionColorBorder = new QAction(MainWindow);
        actionColorBorder->setObjectName(QStringLiteral("actionColorBorder"));
        actionColorBorder->setFont(font);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        actionCutSelect = new QAction(MainWindow);
        actionCutSelect->setObjectName(QStringLiteral("actionCutSelect"));
        actionCutSelect->setCheckable(false);
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/clip.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSelect->setIcon(icon26);
        actionFill = new QAction(MainWindow);
        actionFill->setObjectName(QStringLiteral("actionFill"));
        actionFill->setCheckable(true);
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFill->setIcon(icon27);
        action_aboutQt = new QAction(MainWindow);
        action_aboutQt->setObjectName(QStringLiteral("action_aboutQt"));
        actionZoomin = new QAction(MainWindow);
        actionZoomin->setObjectName(QStringLiteral("actionZoomin"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomin->setIcon(icon28);
        actionZoomout = new QAction(MainWindow);
        actionZoomout->setObjectName(QStringLiteral("actionZoomout"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomout->setIcon(icon29);
        actionZoom1 = new QAction(MainWindow);
        actionZoom1->setObjectName(QStringLiteral("actionZoom1"));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/zoom1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom1->setIcon(icon30);
        actionRotateRight = new QAction(MainWindow);
        actionRotateRight->setObjectName(QStringLiteral("actionRotateRight"));
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/rr.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateRight->setIcon(icon31);
        actionRotateLeft = new QAction(MainWindow);
        actionRotateLeft->setObjectName(QStringLiteral("actionRotateLeft"));
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/rl.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateLeft->setIcon(icon32);
        actionMirrorHorizontal = new QAction(MainWindow);
        actionMirrorHorizontal->setObjectName(QStringLiteral("actionMirrorHorizontal"));
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/MirrorHorizontal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMirrorHorizontal->setIcon(icon33);
        actionMirrorVertical = new QAction(MainWindow);
        actionMirrorVertical->setObjectName(QStringLiteral("actionMirrorVertical"));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/MirrorVertical.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMirrorVertical->setIcon(icon34);
        action_gray = new QAction(MainWindow);
        action_gray->setObjectName(QStringLiteral("action_gray"));
        action_invert = new QAction(MainWindow);
        action_invert->setObjectName(QStringLiteral("action_invert"));
        action_import = new QAction(MainWindow);
        action_import->setObjectName(QStringLiteral("action_import"));
        action_blur = new QAction(MainWindow);
        action_blur->setObjectName(QStringLiteral("action_blur"));
        actionColorPicker = new QAction(MainWindow);
        actionColorPicker->setObjectName(QStringLiteral("actionColorPicker"));
        actionColorPicker->setCheckable(true);
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/color_picker.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColorPicker->setIcon(icon35);
        actionArrow = new QAction(MainWindow);
        actionArrow->setObjectName(QStringLiteral("actionArrow"));
        actionArrow->setCheckable(true);
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArrow->setIcon(icon36);
        action_transparent = new QAction(MainWindow);
        action_transparent->setObjectName(QStringLiteral("action_transparent"));
        action_mosaic = new QAction(MainWindow);
        action_mosaic->setObjectName(QStringLiteral("action_mosaic"));
        action_matting = new QAction(MainWindow);
        action_matting->setObjectName(QStringLiteral("action_matting"));
        action_adjustRGB = new QAction(MainWindow);
        action_adjustRGB->setObjectName(QStringLiteral("action_adjustRGB"));
        action_clipPath = new QAction(MainWindow);
        action_clipPath->setObjectName(QStringLiteral("action_clipPath"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1083, 26));
        menu_file = new QMenu(menuBar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        menu_edit = new QMenu(menuBar);
        menu_edit->setObjectName(QStringLiteral("menu_edit"));
        menu_image = new QMenu(menuBar);
        menu_image->setObjectName(QStringLiteral("menu_image"));
        menu_about = new QMenu(menuBar);
        menu_about->setObjectName(QStringLiteral("menu_about"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_file->menuAction());
        menuBar->addAction(menu_edit->menuAction());
        menuBar->addAction(menu_image->menuAction());
        menuBar->addAction(menu_about->menuAction());
        menu_file->addAction(action_new);
        menu_file->addAction(action_open);
        menu_file->addAction(action_import);
        menu_file->addAction(action_save);
        menu_file->addAction(action_saveas);
        menu_file->addAction(action_quit);
        menu_edit->addAction(action_undo);
        menu_edit->addAction(action_redo);
        menu_edit->addAction(action_copy);
        menu_edit->addAction(action_cut);
        menu_edit->addAction(action_paste);
        menu_edit->addAction(action_selectAll);
        menu_edit->addAction(action_delete);
        menu_image->addAction(action_flip);
        menu_image->addAction(action_excude);
        menu_image->addAction(action_property);
        menu_image->addAction(action_setWallpaper);
        menu_image->addAction(action_gray);
        menu_image->addAction(action_invert);
        menu_image->addAction(action_blur);
        menu_image->addAction(action_transparent);
        menu_image->addAction(action_mosaic);
        menu_image->addAction(action_matting);
        menu_image->addAction(action_adjustRGB);
        menu_image->addAction(action_clipPath);
        menu_about->addAction(action_help);
        menu_about->addAction(action_changelog);
        menu_about->addAction(action_aboutQt);
        menu_about->addAction(action_about);
        mainToolBar->addAction(actionPencil);
        mainToolBar->addAction(actionLine);
        mainToolBar->addAction(actionArrow);
        mainToolBar->addAction(actionRect);
        mainToolBar->addAction(actionEllipse);
        mainToolBar->addAction(actionText);
        mainToolBar->addAction(actionColorPicker);
        mainToolBar->addAction(actionFill);
        mainToolBar->addAction(actionErase);
        mainToolBar->addAction(actionMove);
        mainToolBar->addAction(actionRectSelect);
        mainToolBar->addAction(actionCutSelect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRotateLeft);
        mainToolBar->addAction(actionRotateRight);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMirrorHorizontal);
        mainToolBar->addAction(actionMirrorVertical);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoomin);
        mainToolBar->addAction(actionZoomout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoom1);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFont);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\262\215\351\262\215\345\260\217\347\224\273\346\235\277", Q_NULLPTR));
        action_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_saveas->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_saveas->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_undo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_redo->setText(QApplication::translate("MainWindow", "\351\207\215\345\201\232", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_cut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_cut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_paste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_selectAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_selectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_delete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_delete->setShortcut(QApplication::translate("MainWindow", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_flip->setText(QApplication::translate("MainWindow", "\347\277\273\350\275\254/\346\227\213\350\275\254", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_flip->setToolTip(QApplication::translate("MainWindow", "\347\277\273\350\275\254/\346\227\213\350\275\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_flip->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_excude->setText(QApplication::translate("MainWindow", "\346\213\211\344\274\270/\346\211\255\346\233\262", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_excude->setToolTip(QApplication::translate("MainWindow", "\346\213\211\344\274\270/\346\211\255\346\233\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_excude->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_property->setText(QApplication::translate("MainWindow", "\345\261\236\346\200\247", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_property->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_setWallpaper->setText(QApplication::translate("MainWindow", "\350\256\276\344\270\272\345\243\201\347\272\270", Q_NULLPTR));
        action_help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_help->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_changelog->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260\346\227\245\345\277\227", Q_NULLPTR));
        action_about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        action_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_new->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPencil->setText(QApplication::translate("MainWindow", "\351\223\205\347\254\224", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPencil->setToolTip(QApplication::translate("MainWindow", "\351\223\205\347\254\224", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLine->setText(QApplication::translate("MainWindow", "\347\233\264\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLine->setToolTip(QApplication::translate("MainWindow", "\347\233\264\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEllipse->setText(QApplication::translate("MainWindow", "\346\244\255\345\234\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEllipse->setToolTip(QApplication::translate("MainWindow", "\346\244\255\345\234\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRect->setText(QApplication::translate("MainWindow", "\347\237\251\345\275\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRect->setToolTip(QApplication::translate("MainWindow", "\347\237\251\345\275\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionText->setText(QApplication::translate("MainWindow", "\346\226\207\346\234\254", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionText->setToolTip(QApplication::translate("MainWindow", "\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionErase->setText(QApplication::translate("MainWindow", "\347\254\224\345\210\267", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionErase->setToolTip(QApplication::translate("MainWindow", "\347\254\224\345\210\267", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMove->setText(QApplication::translate("MainWindow", "move", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMove->setToolTip(QApplication::translate("MainWindow", "\347\247\273\345\212\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRectSelect->setText(QApplication::translate("MainWindow", "rectselect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRectSelect->setToolTip(QApplication::translate("MainWindow", "\346\241\206\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionColorFill->setText(QApplication::translate("MainWindow", "\342\226\240", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionColorFill->setToolTip(QApplication::translate("MainWindow", "\345\241\253\345\205\205", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionColorBorder->setText(QApplication::translate("MainWindow", "\342\226\241", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionColorBorder->setToolTip(QApplication::translate("MainWindow", "\350\276\271\346\241\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionFont->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFont->setToolTip(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCutSelect->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207\351\200\211\345\214\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCutSelect->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207\351\200\211\345\214\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionFill->setText(QApplication::translate("MainWindow", "Fill", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFill->setToolTip(QApplication::translate("MainWindow", "\345\241\253\345\205\205", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_aboutQt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt", Q_NULLPTR));
        actionZoomin->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZoomin->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionZoomout->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZoomout->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionZoom1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZoom1->setToolTip(QApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRotateRight->setText(QApplication::translate("MainWindow", "rotateRight", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRotateRight->setToolTip(QApplication::translate("MainWindow", "\345\217\263\350\275\25490\302\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRotateLeft->setText(QApplication::translate("MainWindow", "RotateLeft", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRotateLeft->setToolTip(QApplication::translate("MainWindow", "\345\267\246\350\275\25490\302\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMirrorHorizontal->setText(QApplication::translate("MainWindow", "MirrorHorizontal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMirrorHorizontal->setToolTip(QApplication::translate("MainWindow", "\346\260\264\345\271\263\351\225\234\345\203\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMirrorVertical->setText(QApplication::translate("MainWindow", "MirrorVertical", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMirrorVertical->setToolTip(QApplication::translate("MainWindow", "\345\236\202\347\233\264\351\225\234\345\203\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_gray->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246", Q_NULLPTR));
        action_invert->setText(QApplication::translate("MainWindow", "\345\217\215\350\211\262", Q_NULLPTR));
        action_import->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\345\233\276\347\211\207", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_import->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_blur->setText(QApplication::translate("MainWindow", "\346\250\241\347\263\212", Q_NULLPTR));
        actionColorPicker->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262\346\213\276\345\217\226", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionColorPicker->setToolTip(QApplication::translate("MainWindow", "\351\242\234\350\211\262\346\213\276\345\217\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionArrow->setText(QApplication::translate("MainWindow", "\347\256\255\345\244\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionArrow->setToolTip(QApplication::translate("MainWindow", "\347\256\255\345\244\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_transparent->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262\351\200\217\346\230\216", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_transparent->setToolTip(QApplication::translate("MainWindow", "\351\242\234\350\211\262\351\200\217\346\230\216", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_mosaic->setText(QApplication::translate("MainWindow", "\351\251\254\350\265\233\345\205\213", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_mosaic->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_matting->setText(QApplication::translate("MainWindow", "\346\212\240\345\233\276", Q_NULLPTR));
        action_adjustRGB->setText(QApplication::translate("MainWindow", "\350\260\203\350\211\262", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_adjustRGB->setToolTip(QApplication::translate("MainWindow", "\350\260\203\350\211\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_adjustRGB->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_clipPath->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204\350\243\201\345\211\252", Q_NULLPTR));
        menu_file->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_edit->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_image->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217", Q_NULLPTR));
        menu_about->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
