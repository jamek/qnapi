/* QNapi
 * Autor: Krzemin <pkrzemin@o2.pl>
 * Ten program jest rozprowadzany na licencji GNU General Public License.
 */

#ifndef __FRMOPTIONS__H__
#define __FRMOPTIONS__H__

#include <QFileDialog>
#include <QFileInfo>
#include <QDir>
#include <QMessageBox>
#include <QList>
#include <QTextCodec>
#include "ui_frmoptions.h"
#include "qnapiconfig.h"

class frmOptions: public QDialog
{
Q_OBJECT
	public:
		frmOptions(QWidget *parent = 0, Qt::WFlags f = 0);
		~frmOptions() {};

	public slots:
		void writeConfig();
		void readConfig();

	private slots:
		void select7zPath();
		void selectTmpPath();
		void changeEncodingClicked();
		void autoDetectEncodingClicked();
		void showAllEncodingsClicked();

	private:
		Ui::frmOptions ui;
		void showAllEncodings();
};

#endif
