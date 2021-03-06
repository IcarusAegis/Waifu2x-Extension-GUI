﻿/*
    Copyright (C) 2020  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::Init_Table()
{
    Table_model_image->setColumnCount(4);
    Table_model_image->setHeaderData(0, Qt::Horizontal, tr("Image File Name"));
    Table_model_image->setHeaderData(1, Qt::Horizontal, tr("Status"));
    Table_model_image->setHeaderData(2, Qt::Horizontal, tr("Full Path"));
    Table_model_image->setHeaderData(3, Qt::Horizontal, tr("Custom resolution(Width x Height)"));
    ui->tableView_image->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tableView_image->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView_image->setModel(Table_model_image);
    //=================================
    Table_model_gif->setColumnCount(4);
    Table_model_gif->setHeaderData(0, Qt::Horizontal, tr("GIF File Name"));
    Table_model_gif->setHeaderData(1, Qt::Horizontal, tr("Status"));
    Table_model_gif->setHeaderData(2, Qt::Horizontal, tr("Full Path"));
    Table_model_gif->setHeaderData(3, Qt::Horizontal, tr("Custom resolution(Width x Height)"));
    ui->tableView_gif->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tableView_gif->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView_gif->setModel(Table_model_gif);
    //=================================
    Table_model_video->setColumnCount(4);
    Table_model_video->setHeaderData(0, Qt::Horizontal, tr("Video File Name"));
    Table_model_video->setHeaderData(1, Qt::Horizontal, tr("Status"));
    Table_model_video->setHeaderData(2, Qt::Horizontal, tr("Full Path"));
    Table_model_video->setHeaderData(3, Qt::Horizontal, tr("Custom resolution(Width x Height)"));
    ui->tableView_video->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tableView_video->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView_video->setModel(Table_model_video);
    //=============================================
    ui->tableView_video->horizontalHeader()->setVisible(1);
}

void MainWindow::Table_image_insert_fileName_fullPath(QString fileName, QString SourceFile_fullPath)
{
    ui->tableView_image->setUpdatesEnabled(false);
    int rowNum = Table_model_image->rowCount();
    Table_model_image->setItem(rowNum, 0, new QStandardItem(fileName));
    Table_model_image->setItem(rowNum, 2, new QStandardItem(SourceFile_fullPath));
    ui->tableView_image->setUpdatesEnabled(true);
}

void MainWindow::Table_gif_insert_fileName_fullPath(QString fileName, QString SourceFile_fullPath)
{
    ui->tableView_gif->setUpdatesEnabled(false);
    int rowNum = Table_model_gif->rowCount();
    Table_model_gif->setItem(rowNum, 0, new QStandardItem(fileName));
    Table_model_gif->setItem(rowNum, 2, new QStandardItem(SourceFile_fullPath));
    ui->tableView_gif->setUpdatesEnabled(true);
}

void MainWindow::Table_video_insert_fileName_fullPath(QString fileName, QString SourceFile_fullPath)
{
    ui->tableView_video->setUpdatesEnabled(false);
    int rowNum = Table_model_video->rowCount();
    Table_model_video->setItem(rowNum, 0, new QStandardItem(fileName));
    Table_model_video->setItem(rowNum, 2, new QStandardItem(SourceFile_fullPath));
    ui->tableView_video->setUpdatesEnabled(true);
}

void MainWindow::Table_image_ChangeStatus_rowNumInt_statusQString(int rowNum, QString status)
{
    ui->tableView_image->setUpdatesEnabled(false);
    Table_model_image->setItem(rowNum, 1, new QStandardItem(status));
    if(ui->checkBox_FileListAutoSlide->checkState())
    {
        QAbstractItemModel *modessl = Table_model_image;
        QModelIndex indextemp = modessl->index(rowNum, 1);
        ui->tableView_image->scrollTo(indextemp);
    }
    ui->tableView_image->setUpdatesEnabled(true);
}

void MainWindow::Table_gif_ChangeStatus_rowNumInt_statusQString(int rowNum, QString status)
{
    ui->tableView_gif->setUpdatesEnabled(false);
    Table_model_gif->setItem(rowNum, 1, new QStandardItem(status));
    if(ui->checkBox_FileListAutoSlide->checkState())
    {
        QAbstractItemModel *modessl = Table_model_gif;
        QModelIndex indextemp = modessl->index(rowNum, 1);
        ui->tableView_gif->scrollTo(indextemp);
    }
    ui->tableView_gif->setUpdatesEnabled(true);
}

void MainWindow::Table_video_ChangeStatus_rowNumInt_statusQString(int rowNum, QString status)
{
    ui->tableView_video->setUpdatesEnabled(false);
    Table_model_video->setItem(rowNum, 1, new QStandardItem(status));
    if(ui->checkBox_FileListAutoSlide->checkState())
    {
        QAbstractItemModel *modessl = Table_model_video;
        QModelIndex indextemp = modessl->index(rowNum, 1);
        ui->tableView_video->scrollTo(indextemp);
    }
    ui->tableView_video->setUpdatesEnabled(true);
}

void MainWindow::Table_image_CustRes_rowNumInt_HeightQString_WidthQString(int rowNum, QString height, QString width)
{
    QString ResStr = width+" x "+height;
    ui->tableView_image->setUpdatesEnabled(false);
    Table_model_image->setItem(rowNum, 3, new QStandardItem(ResStr));
    ui->tableView_image->setUpdatesEnabled(true);
}

void MainWindow::Table_gif_CustRes_rowNumInt_HeightQString_WidthQString(int rowNum, QString height, QString width)
{
    QString ResStr = width+" x "+height;
    ui->tableView_gif->setUpdatesEnabled(false);
    Table_model_gif->setItem(rowNum, 3, new QStandardItem(ResStr));
    ui->tableView_gif->setUpdatesEnabled(true);
}

void MainWindow::Table_video_CustRes_rowNumInt_HeightQString_WidthQString(int rowNum, QString height, QString width)
{
    QString ResStr = width+" x "+height;
    ui->tableView_video->setUpdatesEnabled(false);
    Table_model_video->setItem(rowNum, 3, new QStandardItem(ResStr));
    ui->tableView_video->setUpdatesEnabled(true);
}

void MainWindow::Table_image_CustRes_Cancel_rowNumInt(int rowNum)
{
    ui->tableView_image->setUpdatesEnabled(false);
    Table_model_image->setItem(rowNum, 3, new QStandardItem(""));
    ui->tableView_image->setUpdatesEnabled(true);
}

void MainWindow::Table_gif_CustRes_Cancel_rowNumInt(int rowNum)
{
    ui->tableView_gif->setUpdatesEnabled(false);
    Table_model_gif->setItem(rowNum, 3, new QStandardItem(""));
    ui->tableView_gif->setUpdatesEnabled(true);
}

void MainWindow::Table_video_CustRes_Cancel_rowNumInt(int rowNum)
{
    ui->tableView_video->setUpdatesEnabled(false);
    Table_model_video->setItem(rowNum, 3, new QStandardItem(""));
    ui->tableView_video->setUpdatesEnabled(true);
}


void MainWindow::Table_ChangeAllStatusToWaiting()
{
    ui->tableView_image->setUpdatesEnabled(false);
    ui->tableView_gif->setUpdatesEnabled(false);
    ui->tableView_video->setUpdatesEnabled(false);
    bool ReProcFinFiles = ui->checkBox_ReProcFinFiles->checkState();
    int rowNum = Table_model_image->rowCount();
    for (int i = 0; i < rowNum; i++)
    {
        QAbstractItemModel *modessl = Table_model_image;
        QModelIndex indextemp = modessl->index(i, 1);
        QVariant datatemp = modessl->data(indextemp);
        QString status = datatemp.toString();
        if(ReProcFinFiles)
        {
            if(status != "Finished, original file deleted")
            {
                Table_model_image->setItem(i, 1, new QStandardItem("Waiting"));
            }
        }
        else
        {
            if(status != "Finished, original file deleted" && status != "Finished")
            {
                Table_model_image->setItem(i, 1, new QStandardItem("Waiting"));
            }
        }
    }
    rowNum = Table_model_gif->rowCount();
    for (int i = 0; i < rowNum; i++)
    {
        QAbstractItemModel *modessl = Table_model_gif;
        QModelIndex indextemp = modessl->index(i, 1);
        QVariant datatemp = modessl->data(indextemp);
        QString status = datatemp.toString();
        if(ReProcFinFiles)
        {
            if(status != "Finished, original file deleted")
            {
                Table_model_gif->setItem(i, 1, new QStandardItem("Waiting"));
            }
        }
        else
        {
            if(status != "Finished, original file deleted" && status != "Finished")
            {
                Table_model_gif->setItem(i, 1, new QStandardItem("Waiting"));
            }
        }
    }
    rowNum = Table_model_video->rowCount();
    for (int i = 0; i < rowNum; i++)
    {
        QAbstractItemModel *modessl = Table_model_video;
        QModelIndex indextemp = modessl->index(i, 1);
        QVariant datatemp = modessl->data(indextemp);
        QString status = datatemp.toString();
        if(ReProcFinFiles)
        {
            if(status != "Finished, original file deleted")
            {
                Table_model_video->setItem(i, 1, new QStandardItem("Waiting"));
            }
        }
        else
        {
            if(status != "Finished, original file deleted" && status != "Finished")
            {
                Table_model_video->setItem(i, 1, new QStandardItem("Waiting"));
            }
        }
    }
    ui->tableView_image->setUpdatesEnabled(true);
    ui->tableView_gif->setUpdatesEnabled(true);
    ui->tableView_video->setUpdatesEnabled(true);
}

void MainWindow::Table_Clear()
{
    ui->tableView_image->setUpdatesEnabled(false);
    ui->tableView_gif->setUpdatesEnabled(false);
    ui->tableView_video->setUpdatesEnabled(false);
    Table_model_image->clear();
    Table_model_gif->clear();
    Table_model_video->clear();
    Init_Table();
    curRow_image = -1;
    curRow_gif = -1;
    curRow_video = -1;
    ui->tableView_image->setUpdatesEnabled(true);
    ui->tableView_gif->setUpdatesEnabled(true);
    ui->tableView_video->setUpdatesEnabled(true);
}

int MainWindow::Table_image_get_rowNum()
{
    int rowNum = Table_model_image->rowCount();
    return rowNum;
}

int MainWindow::Table_gif_get_rowNum()
{
    int rowNum = Table_model_gif->rowCount();
    return rowNum;
}

int MainWindow::Table_video_get_rowNum()
{
    int rowNum = Table_model_video->rowCount();
    return rowNum;
}

QMap<QString, QString> MainWindow::Table_Read_status_fullpath(QStandardItemModel *Table_model)
{
    int rowNum = Table_model->rowCount();
    QMap<QString, QString> Map_fullPath_status;
    for (int i = 0; i < rowNum; i++)
    {
        QAbstractItemModel *modessl = Table_model;
        QModelIndex indextemp_status = modessl->index(i, 1);
        QVariant datatemp_status = modessl->data(indextemp_status);
        QString status = datatemp_status.toString();
        QModelIndex indextemp_fullpath = modessl->index(i, 2);
        QVariant datatemp_fullpath = modessl->data(indextemp_fullpath);
        QString fullpath = datatemp_fullpath.toString();
        Map_fullPath_status[fullpath]=status;
    }
    return Map_fullPath_status;
}

void MainWindow::Table_FileList_reload()
{
    QMap<QString, QString> Map_fullPath_status_image = Table_Read_status_fullpath(Table_model_image);
    QMap<QString, QString> Map_fullPath_status_video = Table_Read_status_fullpath(Table_model_video);
    QMap<QString, QString> Map_fullPath_status_gif = Table_Read_status_fullpath(Table_model_gif);
    Table_Clear();
    RecFinedFiles();
    QList<QMap<QString, QString>> FileList_image_temp;//map["SourceFile_fullPath"],map["rowNum"]
    QList<QMap<QString, QString>> FileList_gif_temp;
    QList<QMap<QString, QString>> FileList_video_temp;
    //====================================================================
    if(!FileList_image.isEmpty())
    {
        for ( int i = 0; i != FileList_image.size(); ++i )
        {
            QMap<QString, QString> File_map = FileList_image.at(i);
            QString Full_Path = File_map["SourceFile_fullPath"];
            QFileInfo fileinfo(Full_Path);
            QString file_name = fileinfo.fileName();
            int rowNum = Table_image_get_rowNum();
            QMap<QString, QString> map;
            map["SourceFile_fullPath"] = Full_Path;
            map["rowNum"] = QString::number(rowNum, 10);
            FileList_image_temp.append(map);
            //======
            Table_image_insert_fileName_fullPath(file_name, Full_Path);
            QString status = Map_fullPath_status_image[Full_Path];
            Table_model_image->setItem(rowNum, 1, new QStandardItem(status));
            //======
            QMap<QString, QString> ResMap = CustRes_getResMap(Full_Path);
            if(!ResMap.isEmpty())
            {
                Table_image_CustRes_rowNumInt_HeightQString_WidthQString(rowNum,ResMap["height"],ResMap["width"]);
            }
        }
        FileList_image = FileList_image_temp;
    }
    //=======================================================================
    if(!FileList_gif.isEmpty())
    {
        for ( int i = 0; i != FileList_gif.size(); ++i )
        {
            QMap<QString, QString> File_map = FileList_gif.at(i);
            QString Full_Path = File_map["SourceFile_fullPath"];
            QFileInfo fileinfo(Full_Path);
            QString file_name = fileinfo.fileName();
            int rowNum = Table_gif_get_rowNum();
            QMap<QString, QString> map;
            map["SourceFile_fullPath"] = Full_Path;
            map["rowNum"] = QString::number(rowNum, 10);
            FileList_gif_temp.append(map);
            Table_gif_insert_fileName_fullPath(file_name, Full_Path);
            QString status = Map_fullPath_status_gif[Full_Path];
            Table_model_gif->setItem(rowNum, 1, new QStandardItem(status));
            //======
            QMap<QString, QString> ResMap = CustRes_getResMap(Full_Path);
            if(!ResMap.isEmpty())
            {
                Table_gif_CustRes_rowNumInt_HeightQString_WidthQString(rowNum,ResMap["height"],ResMap["width"]);
            }
        }
        FileList_gif = FileList_gif_temp;
    }
    //=======================================================================
    if(!FileList_video.isEmpty())
    {
        for ( int i = 0; i != FileList_video.size(); ++i )
        {
            QMap<QString, QString> File_map = FileList_video.at(i);
            QString Full_Path = File_map["SourceFile_fullPath"];
            QFileInfo fileinfo(Full_Path);
            QString file_name = fileinfo.fileName();
            int rowNum = Table_video_get_rowNum();
            QMap<QString, QString> map;
            map["SourceFile_fullPath"] = Full_Path;
            map["rowNum"] = QString::number(rowNum, 10);
            FileList_video_temp.append(map);
            Table_video_insert_fileName_fullPath(file_name, Full_Path);
            QString status = Map_fullPath_status_video[Full_Path];
            Table_model_video->setItem(rowNum, 1, new QStandardItem(status));
            //======
            QMap<QString, QString> ResMap = CustRes_getResMap(Full_Path);
            if(!ResMap.isEmpty())
            {
                Table_video_CustRes_rowNumInt_HeightQString_WidthQString(rowNum,ResMap["height"],ResMap["width"]);
            }
        }
        FileList_video = FileList_video_temp;
    }
    if(!ui->checkBox_ReProcFinFiles->checkState())
    {
        MovToFinedList();
    }
}

int MainWindow::Table_FileCount_reload()
{
    long int filecount=0;
    filecount = Table_model_image->rowCount()+Table_model_gif->rowCount()+Table_model_video->rowCount();
    if(filecount>0)
    {
        ui->label_FileCount->setVisible(1);
        ui->label_FileCount->setText(QString(tr("File count: %1")).arg(filecount));
    }
    else
    {
        ui->label_FileCount->setVisible(0);
        ui->label_FileCount->setText(QString(tr("File count: %1")).arg(filecount));
    }
    return 0;
}

int MainWindow::Table_Save_Current_Table_Filelist()
{
    QString Current_Path = qApp->applicationDirPath();
    QString Table_FileList_ini = Current_Path+"/Table_FileList.ini";
    QFile::remove(Table_FileList_ini);
    //=================
    QSettings *configIniWrite = new QSettings(Table_FileList_ini, QSettings::IniFormat);
    //================= 添加警告 =========================
    configIniWrite->setValue("/Warning/EN", "Do not modify this file! It may cause the program to crash! If problems occur after the modification, delete this article and restart the program.");
    //================= 存储table_image =========================
    configIniWrite->setValue("/table_image/rowCount", Table_model_image->rowCount());
    for(int i=0; i<Table_model_image->rowCount(); i++)
    {
        QAbstractItemModel *modessl = Table_model_image;
        //===
        QModelIndex indextemp = modessl->index(i, 0);
        QVariant datatemp = modessl->data(indextemp);
        QString FileName = datatemp.toString();
        configIniWrite->setValue("/table_image/"+QString::number(i,10)+"_FileName", FileName);
        //===
        indextemp = modessl->index(i, 1);
        datatemp = modessl->data(indextemp);
        QString status = datatemp.toString();
        configIniWrite->setValue("/table_image/"+QString::number(i,10)+"_status", status);
        //===
        indextemp = modessl->index(i, 2);
        datatemp = modessl->data(indextemp);
        QString fullPath = datatemp.toString();
        configIniWrite->setValue("/table_image/"+QString::number(i,10)+"_fullPath", fullPath);
        //===
        indextemp = modessl->index(i, 3);
        datatemp = modessl->data(indextemp);
        QString CustRes_str = datatemp.toString();
        configIniWrite->setValue("/table_image/"+QString::number(i,10)+"_CustRes_str", CustRes_str);
        if(CustRes_str!="")
        {
            QMap<QString, QString> ResMap = CustRes_getResMap(fullPath);
            if(!ResMap.isEmpty())
            {
                configIniWrite->setValue("/table_image/"+QString::number(i,10)+"_CustRes_height", ResMap["height"]);
                configIniWrite->setValue("/table_image/"+QString::number(i,10)+"_CustRes_width", ResMap["width"]);
            }
        }
    }
    //================= 存储table_gif =========================
    configIniWrite->setValue("/table_gif/rowCount", Table_model_gif->rowCount());
    for(int i=0; i<Table_model_gif->rowCount(); i++)
    {
        QAbstractItemModel *modessl = Table_model_gif;
        //===
        QModelIndex indextemp = modessl->index(i, 0);
        QVariant datatemp = modessl->data(indextemp);
        QString FileName = datatemp.toString();
        configIniWrite->setValue("/table_gif/"+QString::number(i,10)+"_FileName", FileName);
        //===
        indextemp = modessl->index(i, 1);
        datatemp = modessl->data(indextemp);
        QString status = datatemp.toString();
        configIniWrite->setValue("/table_gif/"+QString::number(i,10)+"_status", status);
        //===
        indextemp = modessl->index(i, 2);
        datatemp = modessl->data(indextemp);
        QString fullPath = datatemp.toString();
        configIniWrite->setValue("/table_gif/"+QString::number(i,10)+"_fullPath", fullPath);
        //===
        indextemp = modessl->index(i, 3);
        datatemp = modessl->data(indextemp);
        QString CustRes_str = datatemp.toString();
        configIniWrite->setValue("/table_gif/"+QString::number(i,10)+"_CustRes_str", CustRes_str);
        if(CustRes_str!="")
        {
            QMap<QString, QString> ResMap = CustRes_getResMap(fullPath);
            if(!ResMap.isEmpty())
            {
                configIniWrite->setValue("/table_gif/"+QString::number(i,10)+"_CustRes_height", ResMap["height"]);
                configIniWrite->setValue("/table_gif/"+QString::number(i,10)+"_CustRes_width", ResMap["width"]);
            }
        }
    }
    //================= 存储table_video =========================
    configIniWrite->setValue("/table_video/rowCount", Table_model_video->rowCount());
    for(int i=0; i<Table_model_video->rowCount(); i++)
    {
        QAbstractItemModel *modessl = Table_model_video;
        //===
        QModelIndex indextemp = modessl->index(i, 0);
        QVariant datatemp = modessl->data(indextemp);
        QString FileName = datatemp.toString();
        configIniWrite->setValue("/table_video/"+QString::number(i,10)+"_FileName", FileName);
        //===
        indextemp = modessl->index(i, 1);
        datatemp = modessl->data(indextemp);
        QString status = datatemp.toString();
        configIniWrite->setValue("/table_video/"+QString::number(i,10)+"_status", status);
        //===
        indextemp = modessl->index(i, 2);
        datatemp = modessl->data(indextemp);
        QString fullPath = datatemp.toString();
        configIniWrite->setValue("/table_video/"+QString::number(i,10)+"_fullPath", fullPath);
        //===
        indextemp = modessl->index(i, 3);
        datatemp = modessl->data(indextemp);
        QString CustRes_str = datatemp.toString();
        configIniWrite->setValue("/table_video/"+QString::number(i,10)+"_CustRes_str", CustRes_str);
        if(CustRes_str!="")
        {
            QMap<QString, QString> ResMap = CustRes_getResMap(fullPath);
            if(!ResMap.isEmpty())
            {
                configIniWrite->setValue("/table_video/"+QString::number(i,10)+"_CustRes_height", ResMap["height"]);
                configIniWrite->setValue("/table_video/"+QString::number(i,10)+"_CustRes_width", ResMap["width"]);
            }
        }
    }
    return 0;
}

int MainWindow::Table_Save_Current_Table_Filelist_Watchdog()
{
    QString Current_Path = qApp->applicationDirPath();
    QString Table_FileList_ini = Current_Path+"/Table_FileList.ini";
    while(!file_isFileExist(Table_FileList_ini))
    {
        Delay_msec_sleep(100);
    }
    emit Send_Table_Save_Current_Table_Filelist_Finished();
    return 0;
}

int MainWindow::Table_Save_Current_Table_Filelist_Finished()
{
    this->setAcceptDrops(1);//禁止drop file
    ui->pushButton_Start->setEnabled(1);//禁用start button
    ui->groupBox_Input->setEnabled(1);
    ui->pushButton_ClearList->setEnabled(1);
    ui->pushButton_RemoveItem->setEnabled(1);
    ui->checkBox_ReProcFinFiles->setEnabled(1);
    ui->pushButton_CustRes_cancel->setEnabled(1);
    ui->pushButton_CustRes_apply->setEnabled(1);
    ui->pushButton_ReadFileList->setEnabled(1);
    ui->pushButton_SaveFileList->setEnabled(1);
    emit Send_TextBrowser_NewMessage(tr("File list saved successfully!"));
    return 0;
}

int MainWindow::Table_Read_Current_Table_Filelist()
{
    QString Current_Path = qApp->applicationDirPath();
    QString Table_FileList_ini = Current_Path+"/Table_FileList.ini";
    if(!file_isFileExist(Table_FileList_ini))
    {
        emit Send_TextBrowser_NewMessage(tr("Cannot find the saved Files List!"));
        emit Send_Table_Read_Current_Table_Filelist_Finished();
        return 0;
    }
    //=================
    QSettings *configIniRead = new QSettings(Table_FileList_ini, QSettings::IniFormat);
    //====================
    //emit on_pushButton_ClearList_clicked();
    //========= 加载image ========
    int rowCount_image = configIniRead->value("/table_image/rowCount").toInt();
    for(int i=0; i<rowCount_image; i++)
    {
        //===========
        QString FileName =configIniRead->value("/table_image/"+QString::number(i,10)+"_FileName").toString();
        QString status =configIniRead->value("/table_image/"+QString::number(i,10)+"_status").toString();
        QString fullPath =configIniRead->value("/table_image/"+QString::number(i,10)+"_fullPath").toString();
        QString CustRes_str =configIniRead->value("/table_image/"+QString::number(i,10)+"_CustRes_str").toString();
        //================
        QMap<QString, QString> file_map;
        file_map["SourceFile_fullPath"] = fullPath;
        file_map["rowNum"] = QString::number(i, 10);
        FileList_image.append(file_map);
        emit Send_Table_image_insert_fileName_fullPath(FileName,fullPath);
        emit Send_Table_image_ChangeStatus_rowNumInt_statusQString(i,status);
        if(status=="Failed")
        {
            emit Send_TextBrowser_NewMessage(tr("[Failed]--[")+fullPath+"]");
        }
        //===============
        if(CustRes_str!="")
        {
            QString CustRes_height =configIniRead->value("/table_image/"+QString::number(i,10)+"_CustRes_height").toString();
            QString CustRes_width =configIniRead->value("/table_image/"+QString::number(i,10)+"_CustRes_width").toString();
            emit Send_Table_image_CustRes_rowNumInt_HeightQString_WidthQString(i,CustRes_height,CustRes_width);
            QMap<QString, QString> res_map;
            res_map["fullpath"] = fullPath;
            res_map["height"] = CustRes_height;
            res_map["width"] = CustRes_width;
            Custom_resolution_list.append(res_map);
        }
        Delay_msec_sleep(50);
    }
    //========= 加载gif ========
    int rowCount_gif = configIniRead->value("/table_gif/rowCount").toInt();
    for(int i=0; i<rowCount_gif; i++)
    {
        //===========
        QString FileName =configIniRead->value("/table_gif/"+QString::number(i,10)+"_FileName").toString();
        QString status =configIniRead->value("/table_gif/"+QString::number(i,10)+"_status").toString();
        QString fullPath =configIniRead->value("/table_gif/"+QString::number(i,10)+"_fullPath").toString();
        QString CustRes_str =configIniRead->value("/table_gif/"+QString::number(i,10)+"_CustRes_str").toString();
        //================
        QMap<QString, QString> file_map;
        file_map["SourceFile_fullPath"] = fullPath;
        file_map["rowNum"] = QString::number(i, 10);
        FileList_gif.append(file_map);
        emit Send_Table_gif_insert_fileName_fullPath(FileName,fullPath);
        emit Send_Table_gif_ChangeStatus_rowNumInt_statusQString(i,status);
        if(status=="Failed")
        {
            emit Send_TextBrowser_NewMessage(tr("[Failed]--[")+fullPath+"]");
        }
        //===============
        if(CustRes_str!="")
        {
            QString CustRes_height =configIniRead->value("/table_gif/"+QString::number(i,10)+"_CustRes_height").toString();
            QString CustRes_width =configIniRead->value("/table_gif/"+QString::number(i,10)+"_CustRes_width").toString();
            emit Send_Table_gif_CustRes_rowNumInt_HeightQString_WidthQString(i,CustRes_height,CustRes_width);
            QMap<QString, QString> res_map;
            res_map["fullpath"] = fullPath;
            res_map["height"] = CustRes_height;
            res_map["width"] = CustRes_width;
            Custom_resolution_list.append(res_map);
        }
        Delay_msec_sleep(50);
    }
    //========= 加载video ========
    int rowCount_video = configIniRead->value("/table_video/rowCount").toInt();
    for(int i=0; i<rowCount_video; i++)
    {
        //===========
        QString FileName =configIniRead->value("/table_video/"+QString::number(i,10)+"_FileName").toString();
        QString status =configIniRead->value("/table_video/"+QString::number(i,10)+"_status").toString();
        QString fullPath =configIniRead->value("/table_video/"+QString::number(i,10)+"_fullPath").toString();
        QString CustRes_str =configIniRead->value("/table_video/"+QString::number(i,10)+"_CustRes_str").toString();
        //================
        QMap<QString, QString> file_map;
        file_map["SourceFile_fullPath"] = fullPath;
        file_map["rowNum"] = QString::number(i, 10);
        FileList_video.append(file_map);
        emit Send_Table_video_insert_fileName_fullPath(FileName,fullPath);
        emit Send_Table_video_ChangeStatus_rowNumInt_statusQString(i,status);
        if(status=="Failed")
        {
            emit Send_TextBrowser_NewMessage(tr("[Failed]--[")+fullPath+"]");
        }
        //===============
        if(CustRes_str!="")
        {
            QString CustRes_height =configIniRead->value("/table_video/"+QString::number(i,10)+"_CustRes_height").toString();
            QString CustRes_width =configIniRead->value("/table_video/"+QString::number(i,10)+"_CustRes_width").toString();
            emit Send_Table_video_CustRes_rowNumInt_HeightQString_WidthQString(i,CustRes_height,CustRes_width);
            QMap<QString, QString> res_map;
            res_map["fullpath"] = fullPath;
            res_map["height"] = CustRes_height;
            res_map["width"] = CustRes_width;
            Custom_resolution_list.append(res_map);
        }
        Delay_msec_sleep(50);
    }
    //====================
    if(!ui->checkBox_ReProcFinFiles->checkState())
    {
        emit Send_MovToFinedList();
    }
    emit Send_Table_FileCount_reload();
    emit Send_Table_Read_Current_Table_Filelist_Finished();
    return 0;
}

int MainWindow::Table_Read_Current_Table_Filelist_Finished()
{
    this->setAcceptDrops(1);//禁止drop file
    ui->pushButton_Start->setEnabled(1);//禁用start button
    ui->groupBox_Input->setEnabled(1);
    ui->pushButton_ClearList->setEnabled(1);
    ui->pushButton_RemoveItem->setEnabled(1);
    ui->checkBox_ReProcFinFiles->setEnabled(1);
    ui->pushButton_CustRes_cancel->setEnabled(1);
    ui->pushButton_CustRes_apply->setEnabled(1);
    ui->pushButton_ReadFileList->setEnabled(1);
    ui->pushButton_SaveFileList->setEnabled(1);
    QString Current_Path = qApp->applicationDirPath();
    QString Table_FileList_ini = Current_Path+"/Table_FileList.ini";
    if(!file_isFileExist(Table_FileList_ini))
    {
        return 0;
    }
    //=================
    QSettings *configIniRead = new QSettings(Table_FileList_ini, QSettings::IniFormat);
    //====================
    //========= 加载image ========
    int rowCount_image = configIniRead->value("/table_image/rowCount").toInt();
    if(rowCount_image>0)
    {
        ui->label_DropFile->setVisible(0);//隐藏文件投放label
        ui->tableView_image->setVisible(1);
        ui->pushButton_ClearList->setVisible(1);
        ui->pushButton_RemoveItem->setVisible(1);
    }
    //========= 加载gif ========
    int rowCount_gif = configIniRead->value("/table_gif/rowCount").toInt();
    if(rowCount_gif>0)
    {
        ui->label_DropFile->setVisible(0);//隐藏文件投放label
        ui->tableView_gif->setVisible(1);
        ui->pushButton_ClearList->setVisible(1);
        ui->pushButton_RemoveItem->setVisible(1);
    }
    //========= 加载video ========
    int rowCount_video = configIniRead->value("/table_video/rowCount").toInt();
    if(rowCount_video>0)
    {
        ui->label_DropFile->setVisible(0);//隐藏文件投放label
        ui->tableView_video->setVisible(1);
        ui->pushButton_ClearList->setVisible(1);
        ui->pushButton_RemoveItem->setVisible(1);
    }
    ui->tableView_gif->scrollToBottom();
    ui->tableView_image->scrollToBottom();
    ui->tableView_video->scrollToBottom();
    Send_TextBrowser_NewMessage(tr("File list update is complete!"));
    return 0;
}

