/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JInternalFrame.java to edit this template
 */
package form;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.swing.JOptionPane;
import net.proteanit.sql.DbUtils;
import pemrograman_1.ClassDatabase;

/**
 *
 * @author Rizki
 */
public class FormDataSupplier extends javax.swing.JInternalFrame {

    /**
     * Creates new form FormDataSupplierr
     */
    public FormDataSupplier() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel36 = new javax.swing.JLabel();
        TxtKodesupplier = new javax.swing.JTextField();
        jLabel37 = new javax.swing.JLabel();
        jLabel38 = new javax.swing.JLabel();
        Txtnamasupplier = new javax.swing.JTextField();
        jScrollPane8 = new javax.swing.JScrollPane();
        Txtalamatsupplier = new javax.swing.JTextArea();
        jLabel39 = new javax.swing.JLabel();
        Txtnohp = new javax.swing.JTextField();
        jLabel40 = new javax.swing.JLabel();
        Btnclose = new javax.swing.JButton();
        Btndelete = new javax.swing.JButton();
        Btnedit = new javax.swing.JButton();
        Btnsave = new javax.swing.JButton();
        Btnadd = new javax.swing.JButton();
        jPanel9 = new javax.swing.JPanel();
        jScrollPane9 = new javax.swing.JScrollPane();
        Tblsup = new javax.swing.JTable();

        jPanel1.setBackground(new java.awt.Color(0, 153, 153));

        jLabel36.setText("Kode Supplier");

        TxtKodesupplier.addCaretListener(new javax.swing.event.CaretListener() {
            public void caretUpdate(javax.swing.event.CaretEvent evt) {
                TxtKodesupplierCaretUpdate(evt);
            }
        });
        TxtKodesupplier.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TxtKodesupplierActionPerformed(evt);
            }
        });

        jLabel37.setText("Form Input Data Supplier");

        jLabel38.setText("Nama");

        Txtalamatsupplier.setColumns(20);
        Txtalamatsupplier.setRows(5);
        jScrollPane8.setViewportView(Txtalamatsupplier);

        jLabel39.setText("Alamat");

        Txtnohp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TxtnohpActionPerformed(evt);
            }
        });

        jLabel40.setText("No.Hp");

        Btnclose.setText("CLOSE");
        Btnclose.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtncloseActionPerformed(evt);
            }
        });

        Btndelete.setText("DELETE");
        Btndelete.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtndeleteActionPerformed(evt);
            }
        });

        Btnedit.setText("EDIT");
        Btnedit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtneditActionPerformed(evt);
            }
        });

        Btnsave.setText("SAVE");
        Btnsave.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtnsaveActionPerformed(evt);
            }
        });

        Btnadd.setText("ADD");
        Btnadd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtnaddActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel37)
                .addGap(127, 127, 127))
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(14, 14, 14)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(Btnadd)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(Btnsave)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(Btnedit)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(Btndelete)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(Btnclose)
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel36)
                            .addComponent(jLabel38)
                            .addComponent(jLabel39)
                            .addComponent(jLabel40))
                        .addGap(34, 34, 34)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(Txtnohp)
                            .addComponent(jScrollPane8)
                            .addComponent(Txtnamasupplier)
                            .addComponent(TxtKodesupplier))))
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addComponent(jLabel37)
                .addGap(40, 40, 40)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel36)
                    .addComponent(TxtKodesupplier, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel38)
                    .addComponent(Txtnamasupplier, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel39)
                    .addComponent(jScrollPane8, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(7, 7, 7)
                        .addComponent(jLabel40))
                    .addComponent(Txtnohp, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Btnadd)
                    .addComponent(Btnsave)
                    .addComponent(Btnedit)
                    .addComponent(Btndelete)
                    .addComponent(Btnclose))
                .addContainerGap(25, Short.MAX_VALUE))
        );

        jPanel9.setBackground(new java.awt.Color(0, 153, 153));

        Tblsup.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane9.setViewportView(Tblsup);

        javax.swing.GroupLayout jPanel9Layout = new javax.swing.GroupLayout(jPanel9);
        jPanel9.setLayout(jPanel9Layout);
        jPanel9Layout.setHorizontalGroup(
            jPanel9Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel9Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jScrollPane9, javax.swing.GroupLayout.PREFERRED_SIZE, 391, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel9Layout.setVerticalGroup(
            jPanel9Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel9Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jScrollPane9, javax.swing.GroupLayout.DEFAULT_SIZE, 141, Short.MAX_VALUE)
                .addContainerGap())
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addComponent(jPanel9, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jPanel9, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void TxtKodesupplierCaretUpdate(javax.swing.event.CaretEvent evt) {//GEN-FIRST:event_TxtKodesupplierCaretUpdate
        try {
            Connection c=ClassDatabase.getkoneksi();
            Statement s= c.createStatement();
            String sql="Select * from supplier where kodesup='" + this.TxtKodesup.getText() + "'";
            ResultSet r=s.executeQuery(sql);
            while (r.next()){
                this.Txtnamasupplier.setText(r.getString(2));
                this.Txtalamatsupplier.setText(r.getString("alamatsup"));
                this.Txtnohp.setText(r.getString("notelpsup"));
            }
            r.close();
            s.close();

        }catch(SQLException e) {
            System.out.println("Terjadi kesalahan" + e);
        }    // TODO add your handling code here:
    }//GEN-LAST:event_TxtKodesupplierCaretUpdate

    private void TxtKodesupplierActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TxtKodesupplierActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TxtKodesupplierActionPerformed

    private void TxtnohpActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TxtnohpActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TxtnohpActionPerformed

    private void BtncloseActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtncloseActionPerformed
        int ex = JOptionPane.showConfirmDialog(null, "Apakah anda akan keluar? ", "Anda yakin?",
            JOptionPane.YES_NO_OPTION);
        if (ex == 0) {
            dispose();
        }    // TODO add your handling code here:
    }//GEN-LAST:event_BtncloseActionPerformed

    private void BtndeleteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtndeleteActionPerformed
        String kodesup=this.TxtKodesup.getText();

        try {
            Connection c=ClassDatabase.getkoneksi();
            String sql = "Delete from supplier Where kodesup=?";
            PreparedStatement p=(PreparedStatement) c.prepareStatement(sql);
            p.setString(1, kodesup);

            p.executeUpdate();
            p.close();
            JOptionPane.showMessageDialog(this, "Sukses Hapus Data");
        }catch(SQLException e){
            System.out.println(e);
        }finally{
        }
        try {

            Connection c=ClassDatabase.getkoneksi();
            Statement s= c.createStatement();
            String sql="select kodesup, namasup, alamatsup, notelpsup from supplier";
            ResultSet r=s.executeQuery(sql);
            Tblsup.setModel(DbUtils.resultSetToTableModel(r));
        }catch (SQLException e){
            JOptionPane.showMessageDialog(null, e);
        }    // TODO add your handling code here:
    }//GEN-LAST:event_BtndeleteActionPerformed

    private void BtneditActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtneditActionPerformed
        String kodesup=this.TxtKodesup.getText();
        String namasup=this.TxtNamasup.getText();
        String alamatsup=this.TxtAlamatsup.getText();
        String notelpsup=this.TxtNohp.getText();
        if(TxtKodesup.getText().isEmpty())
        {
            JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Kode Supplier Tidak Boleh Kosong");
        }
        else{
            if (TxtNamasup.getText().isEmpty())
            {
                JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Nama Supplier Tidak Boleh Kosong");
            }
            else{
                if (TxtAlamatsup.getText().isEmpty())
                {
                    JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Alamat Tidak Boleh Kosong");
                }
                else{
                    if (TxtNohp.getText().isEmpty())
                    {
                        JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Nomor Telp Tidak Boleh Kosong");
                    }
                    else{
                        try {
                            Connection c=ClassDatabase.getkoneksi();
                            String sql ="UPDATE `servicedb`.`supplier` SET `namasup`=?,`alamatsup` = ?,`notelpsup`=? where kodesup=?";
                            PreparedStatement p=(PreparedStatement) c.prepareStatement(sql);
                            p.setString(4, kodesup);
                            p.setString(1, namasup);
                            p.setString(2, alamatsup);
                            p.setString(3, notelpsup);
                            p.executeUpdate();
                            p.close();
                            JOptionPane.showMessageDialog(this, "Sukses Update Data");
                        }catch(SQLException e){
                            System.out.println(e);
                        }finally{

                        }}}}  }
                        try {

<<<<<<< HEAD
                            Connection c=ClassDatabase.getkoneksi();
                            Statement s= c.createStatement();
                            String sql="select * from supplier";
                            ResultSet r=s.executeQuery(sql);
                            Tblsup.setModel(DbUtils.resultSetToTableModel(r));
                        }catch (SQLException e){
                            JOptionPane.showMessageDialog(null, e);
                        }    // TODO add your handling code here:
    }//GEN-LAST:event_BtneditActionPerformed

    private void BtnsaveActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtnsaveActionPerformed
        String kodesup=this.TxtKodesupplier.getText();
        String namasup=this.Txtnamasupplier.getText();
        String alamatsup=this.Txtalamatsupplier.getText();
        String notelpsup=this.Txtnohp.getText();
        if(TxtKodesup.getText().isEmpty())
        {
            JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Kode Supplier Tidak Boleh Kosong");
        }
        else{
            if (TxtNamasup.getText().isEmpty())
            {
                JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Nama Supplier Tidak Boleh Kosong");
            }
            else{
                if (TxtAlamatsup.getText().isEmpty())
                {
                    JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Alamat Tidak Boleh Kosong");
                }
                else{
                    if (TxtNohp.getText().isEmpty())
                    {
                        JOptionPane.showMessageDialog(this, "Data Belum Lengkap, Nomor Telp Tidak Boleh Kosong");
                    }
                    else{
                        try {
                            Connection c=ClassDatabase.getkoneksi();
                            String sql = "Insert into supplier values (?,?,?,?)";
                            try (PreparedStatement p = (PreparedStatement) c.prepareStatement(sql)) {
                                p.setString(1, kodesup);
                                p.setString(2, namasup);
                                p.setString(3, alamatsup);
                                p.setString(4, notelpsup);
                                p.executeUpdate();
                            }
                            JOptionPane.showMessageDialog(this, "Sukses Tambah Data");

                        }catch(SQLException e){
                            System.out.println(e);
                        }finally{
                        }}}}}
                        try {

                            Connection c=ClassDatabase.getkoneksi();
                            Statement s= c.createStatement();
                            String sql="select * from supplier";
                            ResultSet r=s.executeQuery(sql);
                            Tblsup.setModel(DbUtils.resultSetToTableModel(r));
                        }catch (SQLException e){
                            JOptionPane.showMessageDialog(null, e);
                        }    // TODO add your handling code here:
    }//GEN-LAST:event_BtnsaveActionPerformed

    private void BtnaddActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtnaddActionPerformed
=======
    private void BtnAddActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtnAddActionPerformed
>>>>>>> c51ff847ed80f23be63b4cc8af2fc4d301c384b6
        TxtKodesup.setText("");
        TxtNamasup.setText("");
        TxtAlamatsup.setText("");
        TxtNohp.setText("");
        TxtKodesup.requestFocus();    // TODO add your handling code here:
    }//GEN-LAST:event_BtnaddActionPerformed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton Btnadd;
    private javax.swing.JButton Btnclose;
    private javax.swing.JButton Btndelete;
    private javax.swing.JButton Btnedit;
    private javax.swing.JButton Btnsave;
    private javax.swing.JTable Tblsup;
    private javax.swing.JTextField TxtKodesupplier;
    private javax.swing.JTextArea Txtalamatsupplier;
    private javax.swing.JTextField Txtnamasupplier;
    private javax.swing.JTextField Txtnohp;
    private javax.swing.JLabel jLabel36;
    private javax.swing.JLabel jLabel37;
    private javax.swing.JLabel jLabel38;
    private javax.swing.JLabel jLabel39;
    private javax.swing.JLabel jLabel40;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel9;
    private javax.swing.JScrollPane jScrollPane8;
    private javax.swing.JScrollPane jScrollPane9;
    // End of variables declaration//GEN-END:variables
}
