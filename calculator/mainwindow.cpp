#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    nums.append('7');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_2_clicked()
{
    nums.append('8');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_3_clicked()
{
    nums.append('9');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_4_clicked()
{
    nums.clear();
    result=0;
    pl = 0;
    mn = 0;
    sq = 0;
    div = 0;
    temp = 0;
    ui->lcdNumber->display(0);
}
void MainWindow::on_pushButton_6_clicked()
{
    nums.append('4');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_7_clicked()
{
    nums.append('5');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_8_clicked()
{
    nums.append('6');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_9_clicked()
{
    if (pl != 0 && sq == 0)
    {
        result = result + nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        pl = 0;
    }
    if (mn!=0 && sq == 0)
    {
        result = result - nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        mn = 0;
    }   
    if (div != 0 && sq == 0)
    {
        result = result/nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        div = 0;
    }
    if (sq == 0)
    {
        if (nums.toDouble() !=0)
        {
            if (result !=0)
            {
                result = result*nums.toDouble();
                nums.clear();
                ui->lcdNumber->display(result);
            }
            else
            {
                result = 1 * nums.toDouble();
                ui->lcdNumber->display(result);
            }
            nums.clear();
        }
        else
        {
            temp = result;
            ui->lcdNumber->display(temp);
        }
        sq = 1;
    }
}
void MainWindow::on_pushButton_10_clicked()
{
    if (pl != 0 && div ==0)
    {
        result = result + nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        pl = 0;
    }
    if (mn!=0 && div ==0)
    {
        result = result - nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        mn = 0;
    }
    if (sq != 0 && div ==0)
    {
        result = result*nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        sq = 0;
    }
    if (div == 0)
    {
        if (nums.toDouble() !=0)
        {
            if (result !=0)
            {
                result = result/nums.toDouble();
                nums.clear();
                ui->lcdNumber->display(result);
            }
            else
            {
                result = 1 * nums.toDouble();
                ui->lcdNumber->display(result);
            }
            nums.clear();
        }
        else
        {
            temp = result;
            ui->lcdNumber->display(temp);
        }
        div = 1;
    }
}
void MainWindow::on_pushButton_11_clicked()
{
    nums.append('1');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_12_clicked()
{
    nums.append('2');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_13_clicked()
{
    nums.append('3');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_14_clicked()
{
    if (mn!=0 && pl == 0)
    {
        result = result - nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        mn = 0;
    }
    if (sq != 0 && pl == 0)
    {
        result = result*nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        sq = 0;
    }
    if (div != 0 && pl == 0)
    {
        result = result/nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        div = 0;
    }
    if (pl == 0)
    {
        result = result + nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        pl = 1;
    }
    /*result = result + nums.toDouble();
    pl = 1;
    nums.clear();
    ui->lcdNumber->display(result);*/
}
void MainWindow::on_pushButton_15_clicked()
{
    if (pl != 0 && mn==0)
    {
        result = result + nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        pl = 0;
    }
    if (sq != 0 && mn==0)
    {
        result = result*nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        sq = 0;
    }
    if (div != 0 && mn==0)
    {
        result = result/nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        div = 0;
    }
    if (mn==0)
    {
        result = result - nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        mn = 1;
    }
    /*result = result - nums.toDouble();
    mn = 1;
    nums.clear();
    ui->lcdNumber->display(result);*/
}
void MainWindow::on_pushButton_16_clicked()
{
    nums.append('0');
    ui->lcdNumber->display(nums);
}
void MainWindow::on_pushButton_17_clicked()
{
    if (nums.toDouble()!=0)
    {
        nums.append('.');
        ui->lcdNumber->display(nums);
    }
    else
    {
        nums.append('0');
        nums.append('.');
        ui->lcdNumber->display(nums);
    }

}
void MainWindow::on_pushButton_18_clicked()
{
    if (pl != 0)
    {
        result = result + nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        pl = 0;
    }
    if (mn != 0)
    {
        result = result - nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        mn = 0;
    }
    if (sq != 0)
    {
        result = result*nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        sq = 0;
    }
    if (div != 0)
    {
        result = result/nums.toDouble();
        ui->lcdNumber->display(result);
        nums.clear();
        div = 0;
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if (result == 0)
    {
        result=nums.toDouble()*sign;
        ui->lcdNumber->display(result);
    }
    else
    {
        result = result*sign;
        ui->lcdNumber->display(result);
    }
}
void MainWindow::keyPressEvent(QKeyEvent*event)
{
    if(event ->key() == Qt::Key_0)
    {
        nums.append('0');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_1)
    {
        nums.append('1');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_2)
    {
        nums.append('2');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_3)
    {
        nums.append('3');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_4)
    {
        nums.append('4');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_5)
    {
        nums.append('5');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_6)
    {
        nums.append('6');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_7)
    {
        nums.append('7');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_8)
    {
        nums.append('8');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_9)
    {
        nums.append('9');
        ui->lcdNumber->display(nums);
    }
    if(event ->key() == Qt::Key_Plus)
    {
        if (mn!=0 && pl == 0)
        {
            result = result - nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            mn = 0;
        }
        if (sq != 0 && pl == 0)
        {
            result = result*nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            sq = 0;
        }
        if (div != 0 && pl == 0)
        {
            result = result/nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            div = 0;
        }
        if (pl == 0)
        {
            result = result + nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            pl = 1;
        }
        /*result = result + nums.toDouble();
        pl = result;
        nums.clear();
        ui->lcdNumber->display(result);*/
    }
    if(event ->key() == Qt::Key_Minus)
    {
        if (pl != 0 && mn==0)
        {
            result = result + nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            pl = 0;
        }
        if (sq != 0 && mn==0)
        {
            result = result*nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            sq = 0;
        }
        if (div != 0 && mn==0)
        {
            result = result/nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            div = 0;
        }
        if (mn==0)
        {
            result = result - nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            mn = 1;
        }
        /*result = result - nums.toDouble();
        mn = result;
        nums.clear();
        ui->lcdNumber->display(result);*/
    }
    if(event ->key() == Qt::Key_Asterisk)
    {
        if (pl != 0 && sq == 0)
        {
            result = result + nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            pl = 0;
        }
        if (mn!=0 && sq == 0)
        {
            result = result - nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            mn = 0;
        }
        if (div != 0 && sq == 0)
        {
            result = result/nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            div = 0;
        }
        if (sq == 0)
        {
            if (nums.toDouble() !=0)
            {
                if (result !=0)
                {
                    result = result*nums.toDouble();
                    nums.clear();
                    ui->lcdNumber->display(result);
                }
                else
                {
                    result = 1 * nums.toDouble();
                    ui->lcdNumber->display(result);
                }
                nums.clear();
            }
            else
            {
                temp = result;
                ui->lcdNumber->display(temp);
            }
            sq = 1;
        }
        /*if (nums.toDouble() !=0)
        {
            if (result !=0)
            {
                result = result*nums.toDouble();
                nums.clear();
                ui->lcdNumber->display(result);
            }
            else
            {
                result = 1 * nums.toDouble();
                ui->lcdNumber->display(result);
            }
            nums.clear();
        }
        else
        {
            temp = result;
            ui->lcdNumber->display(temp);
        }
        sq = result;*/
    }
    if(event ->key() == Qt::Key_Slash)
    {
        if (pl != 0 && div ==0)
        {
            result = result + nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            pl = 0;
        }
        if (mn!=0 && div ==0)
        {
            result = result - nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            mn = 0;
        }
        if (sq != 0 && div ==0)
        {
            result = result*nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            sq = 0;
        }
        if (div == 0)
        {
            if (nums.toDouble() !=0)
            {
                if (result !=0)
                {
                    result = result/nums.toDouble();
                    nums.clear();
                    ui->lcdNumber->display(result);
                }
                else
                {
                    result = 1 * nums.toDouble();
                    ui->lcdNumber->display(result);
                }
                nums.clear();
            }
            else
            {
                temp = result;
                ui->lcdNumber->display(temp);
            }
            div = 1;
        }
        /*if (nums.toDouble() !=0)
        {
            if (result !=0)
            {
                result = result/nums.toDouble();
                nums.clear();
                ui->lcdNumber->display(result);
            }
            else
            {
                result = 1 * nums.toDouble();
                ui->lcdNumber->display(result);
            }
            nums.clear();
        }
        else
        {
            temp = result;
            ui->lcdNumber->display(temp);
        }
        div = result;*/
    }
    if(event ->key() == Qt::Key_Enter)
    {
        if (pl != 0)
        {
            result = result + nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            pl = 0;
        }
        if (mn != 0)
        {
            result = result - nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            mn = 0;
        }
        if (sq != 0)
        {
            result = result*nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            sq = 0;
        }
        if (div != 0)
        {
            result = result/nums.toDouble();
            ui->lcdNumber->display(result);
            nums.clear();
            div = 0;
        }
    }
    if(event ->key() == Qt::Key_Escape)
    {
        nums.clear();
        result=0;
        pl = 0;
        mn = 0;
        sq = 0;
        div = 0;
        temp = 0;
        ui->lcdNumber->display(0);
    }
}
