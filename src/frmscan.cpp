/* QNapi
 * Autor: Krzemin <pkrzemin@o2.pl>
 * Ten program jest rozprowadzany na licencji GNU General Public License.
 */

#include "frmscan.h"

frmScan::frmScan(QWidget *parent, Qt::WFlags f) : QDialog(parent, f)
{
	ui.setupUi(this);

	// workaround dla compiza?
	move((QApplication::desktop()->width() - width()) / 2, 
		(QApplication::desktop()->height() - height()) / 2);
}

void frmScan::resizeEvent(QResizeEvent *resize)
{
	int b = 10;
	ui.gridLayout->setGeometry(QRect(b, b, resize->size().width() - b*2,
								resize->size().height() - b*2));
}
