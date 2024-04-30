import { Component } from '@angular/core';
import $ from 'jquery';
@Component({
  selector: 'app-delete-acc',
  templateUrl: './delete-acc.component.html',
  styleUrl: './delete-acc.component.css'
})
export class DeleteAccComponent {
  ngOnInit(){
    $(document).ready(()=>{
      $("#sidebar-toggle").click(()=>{
        $("#sidebar").toggleClass("collapsed");
      });
    })
  }
}
